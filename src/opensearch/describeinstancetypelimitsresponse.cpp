// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinstancetypelimitsresponse.h"
#include "describeinstancetypelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeInstanceTypeLimitsResponse
 * \brief The DescribeInstanceTypeLimitsResponse class provides an interace for OpenSearch DescribeInstanceTypeLimits responses.
 *
 * \inmodule QtAwsOpenSearch
 *
 *  <fullname>Amazon OpenSearch Configuration Service</fullname>
 * 
 *  Use the Amazon OpenSearch configuration API to create, configure, and manage Amazon OpenSearch Service
 * 
 *  domains>
 * 
 *  For sample code that uses the configuration API, see the <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
 *  Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html"> sample code for
 *  sending signed HTTP requests to the OpenSearch APIs</a>.
 * 
 *  </p
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions" target="_blank">Regions and
 *  Endpoints</a>.
 *
 * \sa OpenSearchClient::describeInstanceTypeLimits
 */

/*!
 * Constructs a DescribeInstanceTypeLimitsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInstanceTypeLimitsResponse::DescribeInstanceTypeLimitsResponse(
        const DescribeInstanceTypeLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribeInstanceTypeLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceTypeLimitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInstanceTypeLimitsRequest * DescribeInstanceTypeLimitsResponse::request() const
{
    Q_D(const DescribeInstanceTypeLimitsResponse);
    return static_cast<const DescribeInstanceTypeLimitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DescribeInstanceTypeLimits \a response.
 */
void DescribeInstanceTypeLimitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInstanceTypeLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribeInstanceTypeLimitsResponsePrivate
 * \brief The DescribeInstanceTypeLimitsResponsePrivate class provides private implementation for DescribeInstanceTypeLimitsResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeInstanceTypeLimitsResponsePrivate object with public implementation \a q.
 */
DescribeInstanceTypeLimitsResponsePrivate::DescribeInstanceTypeLimitsResponsePrivate(
    DescribeInstanceTypeLimitsResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribeInstanceTypeLimits response element from \a xml.
 */
void DescribeInstanceTypeLimitsResponsePrivate::parseDescribeInstanceTypeLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceTypeLimitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
