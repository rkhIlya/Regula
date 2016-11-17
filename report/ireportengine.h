#ifndef IREPORTENGINE_H
#define IREPORTENGINE_H

#include <QMap>


class IReportEngine
{
public:
    enum OutputFormat {
        ExcellFormat,
        PdfFormat
    };

    virtual ~IReportEngine() { }

    /**
     * @brief Формирует сводный отчет
     * @param docInfo       Информация об исходном дкументе (для которого формируется отчет)
     * @param groups        Информация о группах ссылочной НД. Группа ссылочной НД соответствует строке сводного отчета
     * @param fileName      Имя выходного файла
     * @param outputFormat  Формат выходного файла
     */
    virtual int generateSummaryReport(const DocumentInformation &docInfo,
                                      const QMap<Group::GroupId, Group> &groups,
                                      const QString &fileName,
                                      OutputFormat outputFormat) = 0;

    /**
     * @brief Формирует детализированный отчет
     * @param docInfo       Информация об исходном дкументе (для которого формируется отчет)
     * @param references    Информация обо всей ссылочной НД. Ссылочная НД соответствует строке детализированного отчета
     * @param fileName      Имя выходного файла
     * @param outputFormat  Формат выходного файла
     */
    virtual int generateDetailedReport(const DocumentInformation &docInfo,
                                       const QMap<Reference::ReferenceId, Reference> &references,
                                       const QString &fileName,
                                       OutputFormat outputFormat) = 0;

signals:
    void reportComplete(QString fileName);
    void progressChanged(double progress);

};

#endif // IREPORTENGINE_H
