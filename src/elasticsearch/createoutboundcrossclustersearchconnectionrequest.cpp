// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createoutboundcrossclustersearchconnectionrequest.h"
#include "createoutboundcrossclustersearchconnectionrequest_p.h"
#include "createoutboundcrossclustersearchconnectionresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::CreateOutboundCrossClusterSearchConnectionRequest
 * \brief The CreateOutboundCrossClusterSearchConnectionRequest class provides an interface for Elasticsearch CreateOutboundCrossClusterSearchConnection requests.
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
 * \sa ElasticsearchClient::createOutboundCrossClusterSearchConnection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOutboundCrossClusterSearchConnectionRequest::CreateOutboundCrossClusterSearchConnectionRequest(const CreateOutboundCrossClusterSearchConnectionRequest &other)
    : ElasticsearchRequest(new CreateOutboundCrossClusterSearchConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOutboundCrossClusterSearchConnectionRequest object.
 */
CreateOutboundCrossClusterSearchConnectionRequest::CreateOutboundCrossClusterSearchConnectionRequest()
    : ElasticsearchRequest(new CreateOutboundCrossClusterSearchConnectionRequestPrivate(ElasticsearchRequest::CreateOutboundCrossClusterSearchConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOutboundCrossClusterSearchConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOutboundCrossClusterSearchConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOutboundCrossClusterSearchConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateOutboundCrossClusterSearchConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::CreateOutboundCrossClusterSearchConnectionRequestPrivate
 * \brief The CreateOutboundCrossClusterSearchConnectionRequestPrivate class provides private implementation for CreateOutboundCrossClusterSearchConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a CreateOutboundCrossClusterSearchConnectionRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
CreateOutboundCrossClusterSearchConnectionRequestPrivate::CreateOutboundCrossClusterSearchConnectionRequestPrivate(
    const ElasticsearchRequest::Action action, CreateOutboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOutboundCrossClusterSearchConnectionRequest
 * class' copy constructor.
 */
CreateOutboundCrossClusterSearchConnectionRequestPrivate::CreateOutboundCrossClusterSearchConnectionRequestPrivate(
    const CreateOutboundCrossClusterSearchConnectionRequestPrivate &other, CreateOutboundCrossClusterSearchConnectionRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
