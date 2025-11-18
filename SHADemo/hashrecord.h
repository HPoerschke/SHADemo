#ifndef HASHRECORD_H
#define HASHRECORD_H

#include <QString>
#include <QDateTime>

class HashRecord
{
public:
    HashRecord() = default;
    HashRecord(const QString &input,
               const QString &algorithm,
               const QString &hash,
               const QDateTime &timestamp);

    const QString &input() const;
    const QString &algorithm() const;
    const QString &hash() const;
    const QDateTime &timestamp() const;

    QString toCsvLine() const;
    static HashRecord fromCsvLine(const QString &line, bool *ok = nullptr);

private:
    QString m_input;
    QString m_algorithm;
    QString m_hash;
    QDateTime m_timestamp;
};

#endif // HASHRECORD_H
