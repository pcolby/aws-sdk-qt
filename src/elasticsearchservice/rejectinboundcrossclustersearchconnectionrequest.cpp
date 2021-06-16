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

#include "rejectinboundcrossclustersearchconnectionrequest.h"
#include "rejectinboundcrossclustersearchconnectionrequest_p.h"
#include "rejectinboundcrossclustersearchconnectionresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::RejectInboundCrossClusterSearchConnectionRequest
 * \brief The RejectInboundCrossClusterSearchConnectionRequest class provides an interface for ElasticsearchService RejectInboundCrossClusterSearchConnection requests.
 *
 * \inmodule QtAwsElasticsearchService
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
 * \sa ElasticsearchServiceClient::rejectInboundCrossClusterSearchConnection
 */

/*!
 * Constructs a copy of \a other.
 */
RejectInboundCrossClusterSearchConnectionRequest::RejectInboundCrossClusterSearchConnectionRequest(const RejectInboundCrossClusterSearchConnectionRequest &other)
    : ElasticsearchServiceRequest(new RejectInboundCrossClusterSearchConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectInboundCrossClusterSearchConnectionRequest object.
 */
RejectInboundCrossClusterSearchConnectionRequest::RejectInboundCrossClusterSearchConnectionRequest()
    : ElasticsearchServiceRequest(new RejectInboundCrossClusterSearchConnectionRequestPrivate(ElasticsearchServiceRequest::RejectInboundCrossClusterSearchConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool RejectInboundCrossClusterSearchConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectInboundCrossClusterSearchConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectInboundCrossClusterSearchConnectionRequest::response(QNetworkReply * const reply) const
{
    return new RejectInboundCrossClusterSearchConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticsearchService::RejectInboundCrossClusterSearchConnectionRequestPrivate
 * \brief The RejectInboundCrossClusterSearchConnectionRequestPrivate class provides private implementation for RejectInboundCrossClusterSearchConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a RejectInboundCrossClusterSearchConnectionRequestPrivate object for ElasticsearchService \a action,
 * with public implementation \a q.
 */
RejectInboundCrossClusterSearchConnectionRequestPrivate::RejectInboundCrossClusterSearchConnectionRequestPrivate(
    const ElasticsearchServiceRequest::Action action, RejectInboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectInboundCrossClusterSearchConnectionRequest
 * class' copy constructor.
 */
RejectInboundCrossClusterSearchConnectionRequestPrivate::RejectInboundCrossClusterSearchConnectionRequestPrivate(
    const RejectInboundCrossClusterSearchConnectionRequestPrivate &other, RejectInboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
