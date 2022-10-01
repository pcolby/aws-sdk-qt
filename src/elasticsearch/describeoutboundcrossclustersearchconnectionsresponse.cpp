// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeoutboundcrossclustersearchconnectionsresponse.h"
#include "describeoutboundcrossclustersearchconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeOutboundCrossClusterSearchConnectionsResponse
 * \brief The DescribeOutboundCrossClusterSearchConnectionsResponse class provides an interace for Elasticsearch DescribeOutboundCrossClusterSearchConnections responses.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::describeOutboundCrossClusterSearchConnections
 */

/*!
 * Constructs a DescribeOutboundCrossClusterSearchConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOutboundCrossClusterSearchConnectionsResponse::DescribeOutboundCrossClusterSearchConnectionsResponse(
        const DescribeOutboundCrossClusterSearchConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeOutboundCrossClusterSearchConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeOutboundCrossClusterSearchConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOutboundCrossClusterSearchConnectionsRequest * DescribeOutboundCrossClusterSearchConnectionsResponse::request() const
{
    Q_D(const DescribeOutboundCrossClusterSearchConnectionsResponse);
    return static_cast<const DescribeOutboundCrossClusterSearchConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribeOutboundCrossClusterSearchConnections \a response.
 */
void DescribeOutboundCrossClusterSearchConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOutboundCrossClusterSearchConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeOutboundCrossClusterSearchConnectionsResponsePrivate
 * \brief The DescribeOutboundCrossClusterSearchConnectionsResponsePrivate class provides private implementation for DescribeOutboundCrossClusterSearchConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeOutboundCrossClusterSearchConnectionsResponsePrivate object with public implementation \a q.
 */
DescribeOutboundCrossClusterSearchConnectionsResponsePrivate::DescribeOutboundCrossClusterSearchConnectionsResponsePrivate(
    DescribeOutboundCrossClusterSearchConnectionsResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeOutboundCrossClusterSearchConnections response element from \a xml.
 */
void DescribeOutboundCrossClusterSearchConnectionsResponsePrivate::parseDescribeOutboundCrossClusterSearchConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOutboundCrossClusterSearchConnectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
