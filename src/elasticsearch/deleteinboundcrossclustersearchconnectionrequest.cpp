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

#include "deleteinboundcrossclustersearchconnectionrequest.h"
#include "deleteinboundcrossclustersearchconnectionrequest_p.h"
#include "deleteinboundcrossclustersearchconnectionresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeleteInboundCrossClusterSearchConnectionRequest
 * \brief The DeleteInboundCrossClusterSearchConnectionRequest class provides an interface for Elasticsearch DeleteInboundCrossClusterSearchConnection requests.
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
 * \sa ElasticsearchClient::deleteInboundCrossClusterSearchConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInboundCrossClusterSearchConnectionRequest::DeleteInboundCrossClusterSearchConnectionRequest(const DeleteInboundCrossClusterSearchConnectionRequest &other)
    : ElasticsearchRequest(new DeleteInboundCrossClusterSearchConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInboundCrossClusterSearchConnectionRequest object.
 */
DeleteInboundCrossClusterSearchConnectionRequest::DeleteInboundCrossClusterSearchConnectionRequest()
    : ElasticsearchRequest(new DeleteInboundCrossClusterSearchConnectionRequestPrivate(ElasticsearchRequest::DeleteInboundCrossClusterSearchConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInboundCrossClusterSearchConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInboundCrossClusterSearchConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInboundCrossClusterSearchConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInboundCrossClusterSearchConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DeleteInboundCrossClusterSearchConnectionRequestPrivate
 * \brief The DeleteInboundCrossClusterSearchConnectionRequestPrivate class provides private implementation for DeleteInboundCrossClusterSearchConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeleteInboundCrossClusterSearchConnectionRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DeleteInboundCrossClusterSearchConnectionRequestPrivate::DeleteInboundCrossClusterSearchConnectionRequestPrivate(
    const ElasticsearchRequest::Action action, DeleteInboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInboundCrossClusterSearchConnectionRequest
 * class' copy constructor.
 */
DeleteInboundCrossClusterSearchConnectionRequestPrivate::DeleteInboundCrossClusterSearchConnectionRequestPrivate(
    const DeleteInboundCrossClusterSearchConnectionRequestPrivate &other, DeleteInboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
