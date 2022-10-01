// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectinboundcrossclustersearchconnectionrequest.h"
#include "rejectinboundcrossclustersearchconnectionrequest_p.h"
#include "rejectinboundcrossclustersearchconnectionresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::RejectInboundCrossClusterSearchConnectionRequest
 * \brief The RejectInboundCrossClusterSearchConnectionRequest class provides an interface for Elasticsearch RejectInboundCrossClusterSearchConnection requests.
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
 * \sa ElasticsearchClient::rejectInboundCrossClusterSearchConnection
 */

/*!
 * Constructs a copy of \a other.
 */
RejectInboundCrossClusterSearchConnectionRequest::RejectInboundCrossClusterSearchConnectionRequest(const RejectInboundCrossClusterSearchConnectionRequest &other)
    : ElasticsearchRequest(new RejectInboundCrossClusterSearchConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectInboundCrossClusterSearchConnectionRequest object.
 */
RejectInboundCrossClusterSearchConnectionRequest::RejectInboundCrossClusterSearchConnectionRequest()
    : ElasticsearchRequest(new RejectInboundCrossClusterSearchConnectionRequestPrivate(ElasticsearchRequest::RejectInboundCrossClusterSearchConnectionAction, this))
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
 * \class QtAws::Elasticsearch::RejectInboundCrossClusterSearchConnectionRequestPrivate
 * \brief The RejectInboundCrossClusterSearchConnectionRequestPrivate class provides private implementation for RejectInboundCrossClusterSearchConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a RejectInboundCrossClusterSearchConnectionRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
RejectInboundCrossClusterSearchConnectionRequestPrivate::RejectInboundCrossClusterSearchConnectionRequestPrivate(
    const ElasticsearchRequest::Action action, RejectInboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
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
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
