// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainsrequest.h"
#include "describedomainsrequest_p.h"
#include "describedomainsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeDomainsRequest
 * \brief The DescribeDomainsRequest class provides an interface for CloudSearch DescribeDomains requests.
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
 * \sa CloudSearchClient::describeDomains
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainsRequest::DescribeDomainsRequest(const DescribeDomainsRequest &other)
    : CloudSearchRequest(new DescribeDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainsRequest object.
 */
DescribeDomainsRequest::DescribeDomainsRequest()
    : CloudSearchRequest(new DescribeDomainsRequestPrivate(CloudSearchRequest::DescribeDomainsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeDomainsRequestPrivate
 * \brief The DescribeDomainsRequestPrivate class provides private implementation for DescribeDomainsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeDomainsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeDomainsRequestPrivate::DescribeDomainsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeDomainsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainsRequest
 * class' copy constructor.
 */
DescribeDomainsRequestPrivate::DescribeDomainsRequestPrivate(
    const DescribeDomainsRequestPrivate &other, DescribeDomainsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
