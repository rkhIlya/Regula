#ifndef INPUT_DOCUMENTINFORMATION_H
#define INPUT_DOCUMENTINFORMATION_H

#include <QVariantMap>



namespace Input {

/**
 * Определение информации о документе.
 */
class DocumentInformation
{
public:
    DocumentInformation();

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
     * DESIGNATION  - обозначение документа
     * TITLE        -  наименование документа
     * VERSION      - версия
     * DATE         - дата
     * AUTHOR       - ФИО автора
     * DEPARTMENT   - №отдела
     * LOGIN        - логин
     */
    QVariantMap _parameters;
};

} // namespace Input

#endif // INPUT_DOCUMENTINFORMATION_H
