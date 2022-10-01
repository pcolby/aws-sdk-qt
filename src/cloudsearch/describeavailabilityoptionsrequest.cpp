// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeavailabilityoptionsrequest.h"
#include "describeavailabilityoptionsrequest_p.h"
#include "describeavailabilityoptionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeAvailabilityOptionsRequest
 * \brief The DescribeAvailabilityOptionsRequest class provides an interface for CloudSearch DescribeAvailabilityOptions requests.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeAvailabilityOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAvailabilityOptionsRequest::DescribeAvailabilityOptionsRequest(const DescribeAvailabilityOptionsRequest &other)
    : CloudSearchRequest(new DescribeAvailabilityOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAvailabilityOptionsRequest object.
 */
DescribeAvailabilityOptionsRequest::DescribeAvailabilityOptionsRequest()
    : CloudSearchRequest(new DescribeAvailabilityOptionsRequestPrivate(CloudSearchRequest::DescribeAvailabilityOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAvailabilityOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAvailabilityOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAvailabilityOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAvailabilityOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeAvailabilityOptionsRequestPrivate
 * \brief The DescribeAvailabilityOptionsRequestPrivate class provides private implementation for DescribeAvailabilityOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeAvailabilityOptionsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeAvailabilityOptionsRequestPrivate::DescribeAvailabilityOptionsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeAvailabilityOptionsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAvailabilityOptionsRequest
 * class' copy constructor.
 */
DescribeAvailabilityOptionsRequestPrivate::DescribeAvailabilityOptionsRequestPrivate(
    const DescribeAvailabilityOptionsRequestPrivate &other, DescribeAvailabilityOptionsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
