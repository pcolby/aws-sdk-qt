// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexpressionsresponse.h"
#include "describeexpressionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeExpressionsResponse
 * \brief The DescribeExpressionsResponse class provides an interace for CloudSearch DescribeExpressions responses.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeExpressions
 */

/*!
 * Constructs a DescribeExpressionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExpressionsResponse::DescribeExpressionsResponse(
        const DescribeExpressionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeExpressionsResponsePrivate(this), parent)
{
    setRequest(new DescribeExpressionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExpressionsRequest * DescribeExpressionsResponse::request() const
{
    Q_D(const DescribeExpressionsResponse);
    return static_cast<const DescribeExpressionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DescribeExpressions \a response.
 */
void DescribeExpressionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExpressionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DescribeExpressionsResponsePrivate
 * \brief The DescribeExpressionsResponsePrivate class provides private implementation for DescribeExpressionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeExpressionsResponsePrivate object with public implementation \a q.
 */
DescribeExpressionsResponsePrivate::DescribeExpressionsResponsePrivate(
    DescribeExpressionsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DescribeExpressions response element from \a xml.
 */
void DescribeExpressionsResponsePrivate::parseDescribeExpressionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExpressionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
