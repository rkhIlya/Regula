#ifndef RULESWIDGET_H
#define RULESWIDGET_H

#include <QWidget>
#include <QTableView>
#include <QGridLayout>
#include <rules.h>

class RulesTableModel : public QAbstractTableModel
{
    Q_OBJECT
    enum {
        DEFAULT_RAW_COUNT = 0,
        DEFAULT_COLUMN_COUNT = 0
    };
public:
    explicit RulesTableModel(Rules *rules, QObject *parent = 0)
    {
        _rules = rules;
        _rows = DEFAULT_RAW_COUNT;
        _columns = DEFAULT_COLUMN_COUNT;
    }
    int rowCount(const QModelIndex &parent) const
    {
        return _rows;
    }
    int columnCount(const QModelIndex &parent) const
    {
        return _columns;
    }



    QVariant data(const QModelIndex &index, int role) const
    {
        if (role != Qt::DisplayRole)
            return QVariant();


        switch (index.column()) {
        case 0:
            _rules->getRule(index.row()).name();
            break;
        case 1:
            _rules->getRule(index.row()).expression();
            break;
        case 2:
            _rules->getRule(index.row()).enabled();
            break;
        default:
            break;
        }

        return QVariant();
    }

private:
    int _rows;
    int _columns;
    Rules *_rules;

};

class RulesWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RulesWidget(QWidget *parent = 0);

private:
    QTableView table;
    QGridLayout grid;
signals:

public slots:
};

#endif // RULESWIDGET_H
