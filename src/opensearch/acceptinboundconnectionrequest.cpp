// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptinboundconnectionrequest.h"
#include "acceptinboundconnectionrequest_p.h"
#include "acceptinboundconnectionresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::AcceptInboundConnectionRequest
 * \brief The AcceptInboundConnectionRequest class provides an interface for OpenSearch AcceptInboundConnection requests.
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
 * \sa OpenSearchClient::acceptInboundConnection
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptInboundConnectionRequest::AcceptInboundConnectionRequest(const AcceptInboundConnectionRequest &other)
    : OpenSearchRequest(new AcceptInboundConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptInboundConnectionRequest object.
 */
AcceptInboundConnectionRequest::AcceptInboundConnectionRequest()
    : OpenSearchRequest(new AcceptInboundConnectionRequestPrivate(OpenSearchRequest::AcceptInboundConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptInboundConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptInboundConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptInboundConnectionRequest::response(QNetworkReply * const reply) const
{
    return new AcceptInboundConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::AcceptInboundConnectionRequestPrivate
 * \brief The AcceptInboundConnectionRequestPrivate class provides private implementation for AcceptInboundConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a AcceptInboundConnectionRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
AcceptInboundConnectionRequestPrivate::AcceptInboundConnectionRequestPrivate(
    const OpenSearchRequest::Action action, AcceptInboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptInboundConnectionRequest
 * class' copy constructor.
 */
AcceptInboundConnectionRequestPrivate::AcceptInboundConnectionRequestPrivate(
    const AcceptInboundConnectionRequestPrivate &other, AcceptInboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
