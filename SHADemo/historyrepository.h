#ifndef HISTORYREPOSITORY_H
#define HISTORYREPOSITORY_H

#include <QString>
#include <QList>

#include "hashrecord.h"

class HistoryRepository
{
public:
    explicit HistoryRepository(const QString &filePath);

    QList<HashRecord> load() const;
    void save(const QList<HashRecord> &records) const;

    static QList<HashRecord> loadFromFile(const QString &filePath);
    static bool saveToFile(const QString &filePath, const QList<HashRecord> &records);

private:
    QString m_filePath;
};

#endif
