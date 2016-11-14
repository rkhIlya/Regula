#ifndef RULES_H
#define RULES_H

#include <QObject>
#include <QRegularExpression>

struct Rule
{
public:
    Rule(QString name)
    {
        _name = name;
    }

    Rule()
    {

    }


    QString name() const;

    QRegularExpression expression() const;
    void setExpression(const QRegularExpression &expression);

    bool enabled() const;
    void setEnabled(bool enabled);

private:
    QString _name;
    QRegularExpression _expression;
    bool _enabled;
};


class Rules : public QObject
{
    Q_OBJECT
public:
    explicit Rules(QObject *parent = 0);
    void addRule(Rule rule);
    void removeRule(QString name);
    Rule getRule(int index);

private:
    QList<Rule> _rules;
    Rule lookUpRule(QString name, bool &found);
signals:



public slots:
};

#endif // RULES_H
