// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectinboundconnectionrequest.h"
#include "rejectinboundconnectionrequest_p.h"
#include "rejectinboundconnectionresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::RejectInboundConnectionRequest
 * \brief The RejectInboundConnectionRequest class provides an interface for OpenSearch RejectInboundConnection requests.
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
 * \sa OpenSearchClient::rejectInboundConnection
 */

/*!
 * Constructs a copy of \a other.
 */
RejectInboundConnectionRequest::RejectInboundConnectionRequest(const RejectInboundConnectionRequest &other)
    : OpenSearchRequest(new RejectInboundConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectInboundConnectionRequest object.
 */
RejectInboundConnectionRequest::RejectInboundConnectionRequest()
    : OpenSearchRequest(new RejectInboundConnectionRequestPrivate(OpenSearchRequest::RejectInboundConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool RejectInboundConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectInboundConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectInboundConnectionRequest::response(QNetworkReply * const reply) const
{
    return new RejectInboundConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::RejectInboundConnectionRequestPrivate
 * \brief The RejectInboundConnectionRequestPrivate class provides private implementation for RejectInboundConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a RejectInboundConnectionRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
RejectInboundConnectionRequestPrivate::RejectInboundConnectionRequestPrivate(
    const OpenSearchRequest::Action action, RejectInboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectInboundConnectionRequest
 * class' copy constructor.
 */
RejectInboundConnectionRequestPrivate::RejectInboundConnectionRequestPrivate(
    const RejectInboundConnectionRequestPrivate &other, RejectInboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
