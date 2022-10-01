// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeserviceaccesspoliciesrequest.h"
#include "describeserviceaccesspoliciesrequest_p.h"
#include "describeserviceaccesspoliciesresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeServiceAccessPoliciesRequest
 * \brief The DescribeServiceAccessPoliciesRequest class provides an interface for CloudSearch DescribeServiceAccessPolicies requests.
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
 * \sa CloudSearchClient::describeServiceAccessPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceAccessPoliciesRequest::DescribeServiceAccessPoliciesRequest(const DescribeServiceAccessPoliciesRequest &other)
    : CloudSearchRequest(new DescribeServiceAccessPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceAccessPoliciesRequest object.
 */
DescribeServiceAccessPoliciesRequest::DescribeServiceAccessPoliciesRequest()
    : CloudSearchRequest(new DescribeServiceAccessPoliciesRequestPrivate(CloudSearchRequest::DescribeServiceAccessPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceAccessPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceAccessPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceAccessPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceAccessPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeServiceAccessPoliciesRequestPrivate
 * \brief The DescribeServiceAccessPoliciesRequestPrivate class provides private implementation for DescribeServiceAccessPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeServiceAccessPoliciesRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeServiceAccessPoliciesRequestPrivate::DescribeServiceAccessPoliciesRequestPrivate(
    const CloudSearchRequest::Action action, DescribeServiceAccessPoliciesRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceAccessPoliciesRequest
 * class' copy constructor.
 */
DescribeServiceAccessPoliciesRequestPrivate::DescribeServiceAccessPoliciesRequestPrivate(
    const DescribeServiceAccessPoliciesRequestPrivate &other, DescribeServiceAccessPoliciesRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
