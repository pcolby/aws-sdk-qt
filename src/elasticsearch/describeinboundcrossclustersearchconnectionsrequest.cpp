// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinboundcrossclustersearchconnectionsrequest.h"
#include "describeinboundcrossclustersearchconnectionsrequest_p.h"
#include "describeinboundcrossclustersearchconnectionsresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeInboundCrossClusterSearchConnectionsRequest
 * \brief The DescribeInboundCrossClusterSearchConnectionsRequest class provides an interface for Elasticsearch DescribeInboundCrossClusterSearchConnections requests.
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
 * \sa ElasticsearchClient::describeInboundCrossClusterSearchConnections
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInboundCrossClusterSearchConnectionsRequest::DescribeInboundCrossClusterSearchConnectionsRequest(const DescribeInboundCrossClusterSearchConnectionsRequest &other)
    : ElasticsearchRequest(new DescribeInboundCrossClusterSearchConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInboundCrossClusterSearchConnectionsRequest object.
 */
DescribeInboundCrossClusterSearchConnectionsRequest::DescribeInboundCrossClusterSearchConnectionsRequest()
    : ElasticsearchRequest(new DescribeInboundCrossClusterSearchConnectionsRequestPrivate(ElasticsearchRequest::DescribeInboundCrossClusterSearchConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInboundCrossClusterSearchConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInboundCrossClusterSearchConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInboundCrossClusterSearchConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInboundCrossClusterSearchConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeInboundCrossClusterSearchConnectionsRequestPrivate
 * \brief The DescribeInboundCrossClusterSearchConnectionsRequestPrivate class provides private implementation for DescribeInboundCrossClusterSearchConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeInboundCrossClusterSearchConnectionsRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeInboundCrossClusterSearchConnectionsRequestPrivate::DescribeInboundCrossClusterSearchConnectionsRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeInboundCrossClusterSearchConnectionsRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInboundCrossClusterSearchConnectionsRequest
 * class' copy constructor.
 */
DescribeInboundCrossClusterSearchConnectionsRequestPrivate::DescribeInboundCrossClusterSearchConnectionsRequestPrivate(
    const DescribeInboundCrossClusterSearchConnectionsRequestPrivate &other, DescribeInboundCrossClusterSearchConnectionsRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
