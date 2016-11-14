#include "ruleswidget.h"

RulesWidget::RulesWidget(QWidget *parent) : QWidget(parent)
{
    Rules *rules = new Rules();
    RulesTableModel *model = new RulesTableModel(rules);
    table.setModel(model);
    grid.addWidget(&table, 0, 0);

    setLayout(&grid);

}
