// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinboundconnectionsresponse.h"
#include "describeinboundconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeInboundConnectionsResponse
 * \brief The DescribeInboundConnectionsResponse class provides an interace for OpenSearch DescribeInboundConnections responses.
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
 * \sa OpenSearchClient::describeInboundConnections
 */

/*!
 * Constructs a DescribeInboundConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInboundConnectionsResponse::DescribeInboundConnectionsResponse(
        const DescribeInboundConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribeInboundConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeInboundConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInboundConnectionsRequest * DescribeInboundConnectionsResponse::request() const
{
    Q_D(const DescribeInboundConnectionsResponse);
    return static_cast<const DescribeInboundConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DescribeInboundConnections \a response.
 */
void DescribeInboundConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInboundConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribeInboundConnectionsResponsePrivate
 * \brief The DescribeInboundConnectionsResponsePrivate class provides private implementation for DescribeInboundConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeInboundConnectionsResponsePrivate object with public implementation \a q.
 */
DescribeInboundConnectionsResponsePrivate::DescribeInboundConnectionsResponsePrivate(
    DescribeInboundConnectionsResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribeInboundConnections response element from \a xml.
 */
void DescribeInboundConnectionsResponsePrivate::parseDescribeInboundConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInboundConnectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
