#ifndef EXERCISEMODEL_H
#define EXERCISEMODEL_H

#include <QAbstractListModel>

class ExerciseModel : public QAbstractListModel
{
  Q_OBJECT

public:
    ExerciseModel(const QStringList, QObject *parent = 0)
        : QAbstractListModel(parent), ExerciseTable(exercises) {}

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const;

private:
    QStringList stringList;
};

#endif // EXERCISEMODEL_H
