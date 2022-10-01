// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportdefinitionsresponse.h"
#include "describereportdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::DescribeReportDefinitionsResponse
 * \brief The DescribeReportDefinitionsResponse class provides an interace for CostandUsageReport DescribeReportDefinitions responses.
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
 * \sa CostandUsageReportClient::describeReportDefinitions
 */

/*!
 * Constructs a DescribeReportDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReportDefinitionsResponse::DescribeReportDefinitionsResponse(
        const DescribeReportDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportResponse(new DescribeReportDefinitionsResponsePrivate(this), parent)
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
 * Parses a successful CostandUsageReport DescribeReportDefinitions \a response.
 */
void DescribeReportDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReportDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostandUsageReport::DescribeReportDefinitionsResponsePrivate
 * \brief The DescribeReportDefinitionsResponsePrivate class provides private implementation for DescribeReportDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a DescribeReportDefinitionsResponsePrivate object with public implementation \a q.
 */
DescribeReportDefinitionsResponsePrivate::DescribeReportDefinitionsResponsePrivate(
    DescribeReportDefinitionsResponse * const q) : CostandUsageReportResponsePrivate(q)
{

}

/*!
 * Parses a CostandUsageReport DescribeReportDefinitions response element from \a xml.
 */
void DescribeReportDefinitionsResponsePrivate::parseDescribeReportDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostandUsageReport
} // namespace QtAws
