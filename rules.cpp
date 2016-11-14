#include "rules.h"

Rules::Rules(QObject *parent) : QObject(parent)
{

}

void Rules::addRule(Rule rule)
{
    _rules.append(rule);
}

void Rules::removeRule(QString name)
{
    for (int i = 0; i < _rules.size(); i++) {
        if (_rules.at(i).name() == name) {
            _rules.removeAt(i);
        }
    }
}

Rule Rules::getRule(int index)
{
    if (index < _rules.size()) {
        return _rules[index];
    }

    return Rule();
}

Rule Rules::lookUpRule(QString name, bool &found)
{
    foreach (Rule rule, _rules) {
        if (rule.name() == name) {
            found = true;
            return rule;
        }
    }

    found = false;
    return Rule();
}


QString Rule::name() const
{
    return _name;
}

QRegularExpression Rule::expression() const
{
    return _expression;
}

void Rule::setExpression(const QRegularExpression &expression)
{
    _expression = expression;
}

bool Rule::enabled() const
{
    return _enabled;
}

void Rule::setEnabled(bool enabled)
{
    _enabled = enabled;
}
