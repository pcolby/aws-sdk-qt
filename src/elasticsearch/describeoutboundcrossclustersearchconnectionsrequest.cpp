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

#include "describeoutboundcrossclustersearchconnectionsrequest.h"
#include "describeoutboundcrossclustersearchconnectionsrequest_p.h"
#include "describeoutboundcrossclustersearchconnectionsresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeOutboundCrossClusterSearchConnectionsRequest
 * \brief The DescribeOutboundCrossClusterSearchConnectionsRequest class provides an interface for Elasticsearch DescribeOutboundCrossClusterSearchConnections requests.
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
 * Constructs a copy of \a other.
 */
DescribeOutboundCrossClusterSearchConnectionsRequest::DescribeOutboundCrossClusterSearchConnectionsRequest(const DescribeOutboundCrossClusterSearchConnectionsRequest &other)
    : ElasticsearchRequest(new DescribeOutboundCrossClusterSearchConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOutboundCrossClusterSearchConnectionsRequest object.
 */
DescribeOutboundCrossClusterSearchConnectionsRequest::DescribeOutboundCrossClusterSearchConnectionsRequest()
    : ElasticsearchRequest(new DescribeOutboundCrossClusterSearchConnectionsRequestPrivate(ElasticsearchRequest::DescribeOutboundCrossClusterSearchConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOutboundCrossClusterSearchConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOutboundCrossClusterSearchConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOutboundCrossClusterSearchConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOutboundCrossClusterSearchConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeOutboundCrossClusterSearchConnectionsRequestPrivate
 * \brief The DescribeOutboundCrossClusterSearchConnectionsRequestPrivate class provides private implementation for DescribeOutboundCrossClusterSearchConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeOutboundCrossClusterSearchConnectionsRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeOutboundCrossClusterSearchConnectionsRequestPrivate::DescribeOutboundCrossClusterSearchConnectionsRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeOutboundCrossClusterSearchConnectionsRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOutboundCrossClusterSearchConnectionsRequest
 * class' copy constructor.
 */
DescribeOutboundCrossClusterSearchConnectionsRequestPrivate::DescribeOutboundCrossClusterSearchConnectionsRequestPrivate(
    const DescribeOutboundCrossClusterSearchConnectionsRequestPrivate &other, DescribeOutboundCrossClusterSearchConnectionsRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
