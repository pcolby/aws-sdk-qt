// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putreportdefinitionresponse.h"
#include "putreportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::PutReportDefinitionResponse
 * \brief The PutReportDefinitionResponse class provides an interace for CostandUsageReport PutReportDefinition responses.
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
 * \sa CostandUsageReportClient::putReportDefinition
 */

/*!
 * Constructs a PutReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
PutReportDefinitionResponse::PutReportDefinitionResponse(
        const PutReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportResponse(new PutReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new PutReportDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutReportDefinitionRequest * PutReportDefinitionResponse::request() const
{
    Q_D(const PutReportDefinitionResponse);
    return static_cast<const PutReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostandUsageReport PutReportDefinition \a response.
 */
void PutReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostandUsageReport::PutReportDefinitionResponsePrivate
 * \brief The PutReportDefinitionResponsePrivate class provides private implementation for PutReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a PutReportDefinitionResponsePrivate object with public implementation \a q.
 */
PutReportDefinitionResponsePrivate::PutReportDefinitionResponsePrivate(
    PutReportDefinitionResponse * const q) : CostandUsageReportResponsePrivate(q)
{

}

/*!
 * Parses a CostandUsageReport PutReportDefinition response element from \a xml.
 */
void PutReportDefinitionResponsePrivate::parsePutReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostandUsageReport
} // namespace QtAws
