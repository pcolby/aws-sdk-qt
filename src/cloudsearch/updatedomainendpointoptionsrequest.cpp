// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainendpointoptionsrequest.h"
#include "updatedomainendpointoptionsrequest_p.h"
#include "updatedomainendpointoptionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::UpdateDomainEndpointOptionsRequest
 * \brief The UpdateDomainEndpointOptionsRequest class provides an interface for CloudSearch UpdateDomainEndpointOptions requests.
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
 * \sa CloudSearchClient::updateDomainEndpointOptions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainEndpointOptionsRequest::UpdateDomainEndpointOptionsRequest(const UpdateDomainEndpointOptionsRequest &other)
    : CloudSearchRequest(new UpdateDomainEndpointOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainEndpointOptionsRequest object.
 */
UpdateDomainEndpointOptionsRequest::UpdateDomainEndpointOptionsRequest()
    : CloudSearchRequest(new UpdateDomainEndpointOptionsRequestPrivate(CloudSearchRequest::UpdateDomainEndpointOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainEndpointOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainEndpointOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainEndpointOptionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainEndpointOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::UpdateDomainEndpointOptionsRequestPrivate
 * \brief The UpdateDomainEndpointOptionsRequestPrivate class provides private implementation for UpdateDomainEndpointOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a UpdateDomainEndpointOptionsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
UpdateDomainEndpointOptionsRequestPrivate::UpdateDomainEndpointOptionsRequestPrivate(
    const CloudSearchRequest::Action action, UpdateDomainEndpointOptionsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainEndpointOptionsRequest
 * class' copy constructor.
 */
UpdateDomainEndpointOptionsRequestPrivate::UpdateDomainEndpointOptionsRequestPrivate(
    const UpdateDomainEndpointOptionsRequestPrivate &other, UpdateDomainEndpointOptionsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
