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
    return HistoryRepository::loadFromFile(m_filePath);
}

void HistoryRepository::save(const QList<HashRecord> &records) const
{
    HistoryRepository::saveToFile(m_filePath, records);
}

QList<HashRecord> HistoryRepository::loadFromFile(const QString &filePath)
{
    QList<HashRecord> result;

    QFile file(filePath);
    if (!file.exists()) {
        return result;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return result;
    }

    QTextStream in(&file);

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

bool HistoryRepository::saveToFile(const QString &filePath, const QList<HashRecord> &records)
{
    QFileInfo info(filePath);
    QDir dir = info.dir();
    if (!dir.exists()) {
        if (!dir.mkpath(".")) {
            return false;
        }
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        return false;
    }

    QTextStream out(&file);

    for (const HashRecord &rec : records) {
        out << rec.toCsvLine() << '\n';
    }

    return true;
}
