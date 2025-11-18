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

private:
    QString m_filePath;
};

#endif // HISTORYREPOSITORY_H
