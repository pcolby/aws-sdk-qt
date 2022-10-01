// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoutboundcrossclustersearchconnectionrequest.h"
#include "deleteoutboundcrossclustersearchconnectionrequest_p.h"
#include "deleteoutboundcrossclustersearchconnectionresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeleteOutboundCrossClusterSearchConnectionRequest
 * \brief The DeleteOutboundCrossClusterSearchConnectionRequest class provides an interface for Elasticsearch DeleteOutboundCrossClusterSearchConnection requests.
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
 * \sa ElasticsearchClient::deleteOutboundCrossClusterSearchConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOutboundCrossClusterSearchConnectionRequest::DeleteOutboundCrossClusterSearchConnectionRequest(const DeleteOutboundCrossClusterSearchConnectionRequest &other)
    : ElasticsearchRequest(new DeleteOutboundCrossClusterSearchConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOutboundCrossClusterSearchConnectionRequest object.
 */
DeleteOutboundCrossClusterSearchConnectionRequest::DeleteOutboundCrossClusterSearchConnectionRequest()
    : ElasticsearchRequest(new DeleteOutboundCrossClusterSearchConnectionRequestPrivate(ElasticsearchRequest::DeleteOutboundCrossClusterSearchConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOutboundCrossClusterSearchConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOutboundCrossClusterSearchConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOutboundCrossClusterSearchConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOutboundCrossClusterSearchConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DeleteOutboundCrossClusterSearchConnectionRequestPrivate
 * \brief The DeleteOutboundCrossClusterSearchConnectionRequestPrivate class provides private implementation for DeleteOutboundCrossClusterSearchConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeleteOutboundCrossClusterSearchConnectionRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DeleteOutboundCrossClusterSearchConnectionRequestPrivate::DeleteOutboundCrossClusterSearchConnectionRequestPrivate(
    const ElasticsearchRequest::Action action, DeleteOutboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOutboundCrossClusterSearchConnectionRequest
 * class' copy constructor.
 */
DeleteOutboundCrossClusterSearchConnectionRequestPrivate::DeleteOutboundCrossClusterSearchConnectionRequestPrivate(
    const DeleteOutboundCrossClusterSearchConnectionRequestPrivate &other, DeleteOutboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
