#include "historyrepository.h"

#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QFileInfo>

HistoryRepository::HistoryRepository(const QString &filePath)
    : m_filePath(filePath)
{
}

QList<HashRecord> HistoryRepository::load() const
{
    QList<HashRecord> result;

    QFile file(m_filePath);
    if (!file.exists()) {
        return result;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return result;
    }

    QTextStream in(&file);
    // Em Qt 6, QTextStream já usa UTF-8 por padrão para arquivos de texto

    while (!in.atEnd()) {
        const QString line = in.readLine().trimmed();
        if (line.isEmpty())
            continue;

        bool ok = false;
        HashRecord rec = HashRecord::fromCsvLine(line, &ok);
        if (ok) {
            result.append(rec);
        }
    }

    return result;
}

void HistoryRepository::save(const QList<HashRecord> &records) const
{
    QFileInfo info(m_filePath);
    QDir dir = info.dir();
    if (!dir.exists()) {
        dir.mkpath(".");
    }

    QFile file(m_filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        return;
    }

    QTextStream out(&file);
    // Em Qt 6, QTextStream já usa UTF-8 por padrão para arquivos de texto

    for (const HashRecord &rec : records) {
        out << rec.toCsvLine() << '\n';
    }
}
