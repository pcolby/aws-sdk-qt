// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportdefinitionresponse.h"
#include "deletereportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::DeleteReportDefinitionResponse
 * \brief The DeleteReportDefinitionResponse class provides an interace for CostandUsageReport DeleteReportDefinition responses.
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
 * \sa CostandUsageReportClient::deleteReportDefinition
 */

/*!
 * Constructs a DeleteReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReportDefinitionResponse::DeleteReportDefinitionResponse(
        const DeleteReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportResponse(new DeleteReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteReportDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReportDefinitionRequest * DeleteReportDefinitionResponse::request() const
{
    Q_D(const DeleteReportDefinitionResponse);
    return static_cast<const DeleteReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostandUsageReport DeleteReportDefinition \a response.
 */
void DeleteReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostandUsageReport::DeleteReportDefinitionResponsePrivate
 * \brief The DeleteReportDefinitionResponsePrivate class provides private implementation for DeleteReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a DeleteReportDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteReportDefinitionResponsePrivate::DeleteReportDefinitionResponsePrivate(
    DeleteReportDefinitionResponse * const q) : CostandUsageReportResponsePrivate(q)
{

}

/*!
 * Parses a CostandUsageReport DeleteReportDefinition response element from \a xml.
 */
void DeleteReportDefinitionResponsePrivate::parseDeleteReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostandUsageReport
} // namespace QtAws
