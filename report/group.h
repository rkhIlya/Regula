#ifndef REPORT_GROUP_H
#define REPORT_GROUP_H

#include <QString>



namespace Report {

typedef int GroupId;

/*!
 * Определение группы. Соответствует строке в сводном отчете.
 *
 * Аттрибуты:
 * идентификатор (№)
 * Параметр
 * Значение
 * Примечание
 */
class Group
{
public:
  Group();

  GroupId identifier() const { return 0; }

  QString parameter() const { return QString(); }

  int value() const { return 0; }

  QString description() const { return QString(); }

};

} // namespace Report

#endif // REPORT_GROUP_H
