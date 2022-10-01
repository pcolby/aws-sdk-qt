// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereservedinstancesrequest.h"
#include "describereservedinstancesrequest_p.h"
#include "describereservedinstancesresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeReservedInstancesRequest
 * \brief The DescribeReservedInstancesRequest class provides an interface for OpenSearch DescribeReservedInstances requests.
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
 * \sa OpenSearchClient::describeReservedInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservedInstancesRequest::DescribeReservedInstancesRequest(const DescribeReservedInstancesRequest &other)
    : OpenSearchRequest(new DescribeReservedInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservedInstancesRequest object.
 */
DescribeReservedInstancesRequest::DescribeReservedInstancesRequest()
    : OpenSearchRequest(new DescribeReservedInstancesRequestPrivate(OpenSearchRequest::DescribeReservedInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservedInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReservedInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DescribeReservedInstancesRequestPrivate
 * \brief The DescribeReservedInstancesRequestPrivate class provides private implementation for DescribeReservedInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeReservedInstancesRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DescribeReservedInstancesRequestPrivate::DescribeReservedInstancesRequestPrivate(
    const OpenSearchRequest::Action action, DescribeReservedInstancesRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstancesRequest
 * class' copy constructor.
 */
DescribeReservedInstancesRequestPrivate::DescribeReservedInstancesRequestPrivate(
    const DescribeReservedInstancesRequestPrivate &other, DescribeReservedInstancesRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
