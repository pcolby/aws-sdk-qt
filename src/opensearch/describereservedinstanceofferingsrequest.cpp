// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereservedinstanceofferingsrequest.h"
#include "describereservedinstanceofferingsrequest_p.h"
#include "describereservedinstanceofferingsresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeReservedInstanceOfferingsRequest
 * \brief The DescribeReservedInstanceOfferingsRequest class provides an interface for OpenSearch DescribeReservedInstanceOfferings requests.
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
 * \sa OpenSearchClient::describeReservedInstanceOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservedInstanceOfferingsRequest::DescribeReservedInstanceOfferingsRequest(const DescribeReservedInstanceOfferingsRequest &other)
    : OpenSearchRequest(new DescribeReservedInstanceOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservedInstanceOfferingsRequest object.
 */
DescribeReservedInstanceOfferingsRequest::DescribeReservedInstanceOfferingsRequest()
    : OpenSearchRequest(new DescribeReservedInstanceOfferingsRequestPrivate(OpenSearchRequest::DescribeReservedInstanceOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservedInstanceOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReservedInstanceOfferingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedInstanceOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstanceOfferingsResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DescribeReservedInstanceOfferingsRequestPrivate
 * \brief The DescribeReservedInstanceOfferingsRequestPrivate class provides private implementation for DescribeReservedInstanceOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeReservedInstanceOfferingsRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DescribeReservedInstanceOfferingsRequestPrivate::DescribeReservedInstanceOfferingsRequestPrivate(
    const OpenSearchRequest::Action action, DescribeReservedInstanceOfferingsRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstanceOfferingsRequest
 * class' copy constructor.
 */
DescribeReservedInstanceOfferingsRequestPrivate::DescribeReservedInstanceOfferingsRequestPrivate(
    const DescribeReservedInstanceOfferingsRequestPrivate &other, DescribeReservedInstanceOfferingsRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
