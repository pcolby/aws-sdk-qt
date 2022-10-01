// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinboundconnectionsrequest.h"
#include "describeinboundconnectionsrequest_p.h"
#include "describeinboundconnectionsresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeInboundConnectionsRequest
 * \brief The DescribeInboundConnectionsRequest class provides an interface for OpenSearch DescribeInboundConnections requests.
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
 * \sa OpenSearchClient::describeInboundConnections
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInboundConnectionsRequest::DescribeInboundConnectionsRequest(const DescribeInboundConnectionsRequest &other)
    : OpenSearchRequest(new DescribeInboundConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInboundConnectionsRequest object.
 */
DescribeInboundConnectionsRequest::DescribeInboundConnectionsRequest()
    : OpenSearchRequest(new DescribeInboundConnectionsRequestPrivate(OpenSearchRequest::DescribeInboundConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInboundConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInboundConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInboundConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInboundConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DescribeInboundConnectionsRequestPrivate
 * \brief The DescribeInboundConnectionsRequestPrivate class provides private implementation for DescribeInboundConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeInboundConnectionsRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DescribeInboundConnectionsRequestPrivate::DescribeInboundConnectionsRequestPrivate(
    const OpenSearchRequest::Action action, DescribeInboundConnectionsRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInboundConnectionsRequest
 * class' copy constructor.
 */
DescribeInboundConnectionsRequestPrivate::DescribeInboundConnectionsRequestPrivate(
    const DescribeInboundConnectionsRequestPrivate &other, DescribeInboundConnectionsRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
