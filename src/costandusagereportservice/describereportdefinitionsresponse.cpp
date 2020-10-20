/*
    Copyright 2013-2020 Paul Colby

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

#include "describereportdefinitionsresponse.h"
#include "describereportdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::DescribeReportDefinitionsResponse
 * \brief The DescribeReportDefinitionsResponse class provides an interace for CostandUsageReportService DescribeReportDefinitions responses.
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
 * \sa CostandUsageReportServiceClient::describeReportDefinitions
 */

/*!
 * Constructs a DescribeReportDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReportDefinitionsResponse::DescribeReportDefinitionsResponse(
        const DescribeReportDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportServiceResponse(new DescribeReportDefinitionsResponsePrivate(this), parent)
{
    setRequest(new DescribeReportDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReportDefinitionsRequest * DescribeReportDefinitionsResponse::request() const
{
    Q_D(const DescribeReportDefinitionsResponse);
    return static_cast<const DescribeReportDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostandUsageReportService DescribeReportDefinitions \a response.
 */
void DescribeReportDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReportDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostandUsageReportService::DescribeReportDefinitionsResponsePrivate
 * \brief The DescribeReportDefinitionsResponsePrivate class provides private implementation for DescribeReportDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * Constructs a DescribeReportDefinitionsResponsePrivate object with public implementation \a q.
 */
DescribeReportDefinitionsResponsePrivate::DescribeReportDefinitionsResponsePrivate(
    DescribeReportDefinitionsResponse * const q) : CostandUsageReportServiceResponsePrivate(q)
{

}

/*!
 * Parses a CostandUsageReportService DescribeReportDefinitions response element from \a xml.
 */
void DescribeReportDefinitionsResponsePrivate::parseDescribeReportDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostandUsageReportService
} // namespace QtAws
