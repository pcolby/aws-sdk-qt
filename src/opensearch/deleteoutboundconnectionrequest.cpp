// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoutboundconnectionrequest.h"
#include "deleteoutboundconnectionrequest_p.h"
#include "deleteoutboundconnectionresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DeleteOutboundConnectionRequest
 * \brief The DeleteOutboundConnectionRequest class provides an interface for OpenSearch DeleteOutboundConnection requests.
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
 * \sa OpenSearchClient::deleteOutboundConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOutboundConnectionRequest::DeleteOutboundConnectionRequest(const DeleteOutboundConnectionRequest &other)
    : OpenSearchRequest(new DeleteOutboundConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOutboundConnectionRequest object.
 */
DeleteOutboundConnectionRequest::DeleteOutboundConnectionRequest()
    : OpenSearchRequest(new DeleteOutboundConnectionRequestPrivate(OpenSearchRequest::DeleteOutboundConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOutboundConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOutboundConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOutboundConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOutboundConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DeleteOutboundConnectionRequestPrivate
 * \brief The DeleteOutboundConnectionRequestPrivate class provides private implementation for DeleteOutboundConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DeleteOutboundConnectionRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DeleteOutboundConnectionRequestPrivate::DeleteOutboundConnectionRequestPrivate(
    const OpenSearchRequest::Action action, DeleteOutboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOutboundConnectionRequest
 * class' copy constructor.
 */
DeleteOutboundConnectionRequestPrivate::DeleteOutboundConnectionRequestPrivate(
    const DeleteOutboundConnectionRequestPrivate &other, DeleteOutboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
