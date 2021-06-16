/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putreportdefinitionresponse.h"
#include "putreportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::PutReportDefinitionResponse
 * \brief The PutReportDefinitionResponse class provides an interace for CostandUsageReportService PutReportDefinition responses.
 *
 * \inmodule QtAwsCostandUsageReportService
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
 * \sa CostandUsageReportServiceClient::putReportDefinition
 */

/*!
 * Constructs a PutReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
PutReportDefinitionResponse::PutReportDefinitionResponse(
        const PutReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportServiceResponse(new PutReportDefinitionResponsePrivate(this), parent)
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
 * Parses a successful CostandUsageReportService PutReportDefinition \a response.
 */
void PutReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostandUsageReportService::PutReportDefinitionResponsePrivate
 * \brief The PutReportDefinitionResponsePrivate class provides private implementation for PutReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * Constructs a PutReportDefinitionResponsePrivate object with public implementation \a q.
 */
PutReportDefinitionResponsePrivate::PutReportDefinitionResponsePrivate(
    PutReportDefinitionResponse * const q) : CostandUsageReportServiceResponsePrivate(q)
{

}

/*!
 * Parses a CostandUsageReportService PutReportDefinition response element from \a xml.
 */
void PutReportDefinitionResponsePrivate::parsePutReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutReportDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostandUsageReportService
} // namespace QtAws
