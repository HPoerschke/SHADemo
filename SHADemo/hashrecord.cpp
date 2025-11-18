#include "hashrecord.h"

HashRecord::HashRecord(const QString &input,
                       const QString &algorithm,
                       const QString &hash,
                       const QDateTime &timestamp)
    : m_input(input)
    , m_algorithm(algorithm)
    , m_hash(hash)
    , m_timestamp(timestamp)
{
}

const QString &HashRecord::input() const
{
    return m_input;
}

const QString &HashRecord::algorithm() const
{
    return m_algorithm;
}

const QString &HashRecord::hash() const
{
    return m_hash;
}

const QDateTime &HashRecord::timestamp() const
{
    return m_timestamp;
}

QString HashRecord::toCsvLine() const
{
    // bem simples: separador ';' e troca quebras de linha por espaço
    QString safeInput = m_input;
    safeInput.replace('\n', ' ').replace('\r', ' ');

    return safeInput + ";" +
           m_algorithm + ";" +
           m_hash + ";" +
           m_timestamp.toString(Qt::ISODate);
}

HashRecord HashRecord::fromCsvLine(const QString &line, bool *ok)
{
    if (ok)
        *ok = false;

    const QStringList parts = line.split(';');
    if (parts.size() != 4)
        return {};

    QString input = parts[0];
    QString algorithm = parts[1];
    QString hash = parts[2];
    QDateTime ts = QDateTime::fromString(parts[3], Qt::ISODate);

    if (!ts.isValid())
        return {};

    if (ok)
        *ok = true;

    return HashRecord(input, algorithm, hash, ts);
}
