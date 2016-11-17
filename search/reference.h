#ifndef SEARCH_REFERENCE_H
#define SEARCH_REFERENCE_H

#include <QVariantMap>



namespace Search {

typedef int ReferenceId;

class Reference
{
public:
  Reference();

  QStringList getParameterIds() const {
    return _parameters.keys();
  }

  QVariant getParameter(const QString &id, const QVariant &defaultValue = QVariant()) const {
    return _parameters.value(id, defaultValue);
  }

private:
  /*!
   * Таблица соответствия идентификатора параметра и значения параметра.
   * идентификаторы следующие:
DOC_ID - идентификатор документа,
 OBOZ - обозначение документа,
 NAIM - наименование документа,
 KodStatus - код статуса
 Status - специальный статус нормативного документа (эти статусы только для НД),
 AnnotStatus - описание статуса,
 ZamAllOboz - составное поле xml. Обозначения заменяющих документов, если заменяющих документов несколько, формируется строка - обозначения заменяющих документов через пробел,
 ZamenaDate - дата начала действия замены/отмены документа,
 ZamenaPrim - примечание к замене/отмене (для старых документов почти вся информация о замене/отмене в этом поле),
   npdz - номер РД о внедрении,
   dpdz - дата РД о внедрении,
   nactvn - номер акта внедрения,
   dactvn - дата акта внедрения,
   nron - номер решения о невнедрении,
   dron - дата выпуска решения о невнедрении,
   dann - дата аннулирования документа работниками БСТ,
   TVER - номер текущей версии документа.

   //

   Notes - поле "Примечание"
   */
  QVariantMap _parameters;
};

} // namespace Search

#endif // SEARCH_REFERENCE_H
