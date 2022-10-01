// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeanalysisschemesresponse.h"
#include "describeanalysisschemesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeAnalysisSchemesResponse
 * \brief The DescribeAnalysisSchemesResponse class provides an interace for CloudSearch DescribeAnalysisSchemes responses.
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
 * \sa CloudSearchClient::describeAnalysisSchemes
 */

/*!
 * Constructs a DescribeAnalysisSchemesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnalysisSchemesResponse::DescribeAnalysisSchemesResponse(
        const DescribeAnalysisSchemesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeAnalysisSchemesResponsePrivate(this), parent)
{
    setRequest(new DescribeAnalysisSchemesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnalysisSchemesRequest * DescribeAnalysisSchemesResponse::request() const
{
    Q_D(const DescribeAnalysisSchemesResponse);
    return static_cast<const DescribeAnalysisSchemesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DescribeAnalysisSchemes \a response.
 */
void DescribeAnalysisSchemesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnalysisSchemesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DescribeAnalysisSchemesResponsePrivate
 * \brief The DescribeAnalysisSchemesResponsePrivate class provides private implementation for DescribeAnalysisSchemesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeAnalysisSchemesResponsePrivate object with public implementation \a q.
 */
DescribeAnalysisSchemesResponsePrivate::DescribeAnalysisSchemesResponsePrivate(
    DescribeAnalysisSchemesResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DescribeAnalysisSchemes response element from \a xml.
 */
void DescribeAnalysisSchemesResponsePrivate::parseDescribeAnalysisSchemesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnalysisSchemesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
