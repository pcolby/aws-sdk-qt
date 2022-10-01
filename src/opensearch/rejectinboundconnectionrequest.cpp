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
