// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreportdefinitionresponse.h"
#include "modifyreportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::ModifyReportDefinitionResponse
 * \brief The ModifyReportDefinitionResponse class provides an interace for CostandUsageReport ModifyReportDefinition responses.
 *
 * \inmodule QtAwsCostandUsageReport
 *
 *  The AWS Cost and Usage Report API enables you to programmatically create, query, and delete AWS Cost and Usage report
 * 
 *  definitions>
 * 
 *  AWS Cost and Usage reports track the monthly AWS costs and usage associated with your AWS account. The report contains
 *  line items for each unique combination of AWS product, usage type, and operation that your AWS account uses. You can
 *  configure the AWS Cost and Usage report to show only the data that you want, using the AWS Cost and Usage
 * 
 *  API>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The AWS Cost and Usage Report API provides the following
 * 
 *  endpoint> <ul> <li>
 *
 * \sa CostandUsageReportClient::modifyReportDefinition
 */

/*!
 * Constructs a ModifyReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyReportDefinitionResponse::ModifyReportDefinitionResponse(
        const ModifyReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportResponse(new ModifyReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new ModifyReportDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyReportDefinitionRequest * ModifyReportDefinitionResponse::request() const
{
    Q_D(const ModifyReportDefinitionResponse);
    return static_cast<const ModifyReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostandUsageReport ModifyReportDefinition \a response.
 */
void ModifyReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostandUsageReport::ModifyReportDefinitionResponsePrivate
 * \brief The ModifyReportDefinitionResponsePrivate class provides private implementation for ModifyReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a ModifyReportDefinitionResponsePrivate object with public implementation \a q.
 */
ModifyReportDefinitionResponsePrivate::ModifyReportDefinitionResponsePrivate(
    ModifyReportDefinitionResponse * const q) : CostandUsageReportResponsePrivate(q)
{

}

/*!
 * Parses a CostandUsageReport ModifyReportDefinition response element from \a xml.
 */
void ModifyReportDefinitionResponsePrivate::parseModifyReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostandUsageReport
} // namespace QtAws
