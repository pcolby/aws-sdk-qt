// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainendpointoptionsrequest.h"
#include "describedomainendpointoptionsrequest_p.h"
#include "describedomainendpointoptionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeDomainEndpointOptionsRequest
 * \brief The DescribeDomainEndpointOptionsRequest class provides an interface for CloudSearch DescribeDomainEndpointOptions requests.
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
 * \sa CloudSearchClient::describeDomainEndpointOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainEndpointOptionsRequest::DescribeDomainEndpointOptionsRequest(const DescribeDomainEndpointOptionsRequest &other)
    : CloudSearchRequest(new DescribeDomainEndpointOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainEndpointOptionsRequest object.
 */
DescribeDomainEndpointOptionsRequest::DescribeDomainEndpointOptionsRequest()
    : CloudSearchRequest(new DescribeDomainEndpointOptionsRequestPrivate(CloudSearchRequest::DescribeDomainEndpointOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainEndpointOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainEndpointOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainEndpointOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainEndpointOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeDomainEndpointOptionsRequestPrivate
 * \brief The DescribeDomainEndpointOptionsRequestPrivate class provides private implementation for DescribeDomainEndpointOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeDomainEndpointOptionsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeDomainEndpointOptionsRequestPrivate::DescribeDomainEndpointOptionsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeDomainEndpointOptionsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainEndpointOptionsRequest
 * class' copy constructor.
 */
DescribeDomainEndpointOptionsRequestPrivate::DescribeDomainEndpointOptionsRequestPrivate(
    const DescribeDomainEndpointOptionsRequestPrivate &other, DescribeDomainEndpointOptionsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
