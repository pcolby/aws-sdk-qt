// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateserviceaccesspoliciesrequest.h"
#include "updateserviceaccesspoliciesrequest_p.h"
#include "updateserviceaccesspoliciesresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::UpdateServiceAccessPoliciesRequest
 * \brief The UpdateServiceAccessPoliciesRequest class provides an interface for CloudSearch UpdateServiceAccessPolicies requests.
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
 * \sa CloudSearchClient::updateServiceAccessPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServiceAccessPoliciesRequest::UpdateServiceAccessPoliciesRequest(const UpdateServiceAccessPoliciesRequest &other)
    : CloudSearchRequest(new UpdateServiceAccessPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServiceAccessPoliciesRequest object.
 */
UpdateServiceAccessPoliciesRequest::UpdateServiceAccessPoliciesRequest()
    : CloudSearchRequest(new UpdateServiceAccessPoliciesRequestPrivate(CloudSearchRequest::UpdateServiceAccessPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceAccessPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServiceAccessPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceAccessPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceAccessPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::UpdateServiceAccessPoliciesRequestPrivate
 * \brief The UpdateServiceAccessPoliciesRequestPrivate class provides private implementation for UpdateServiceAccessPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a UpdateServiceAccessPoliciesRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
UpdateServiceAccessPoliciesRequestPrivate::UpdateServiceAccessPoliciesRequestPrivate(
    const CloudSearchRequest::Action action, UpdateServiceAccessPoliciesRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceAccessPoliciesRequest
 * class' copy constructor.
 */
UpdateServiceAccessPoliciesRequestPrivate::UpdateServiceAccessPoliciesRequestPrivate(
    const UpdateServiceAccessPoliciesRequestPrivate &other, UpdateServiceAccessPoliciesRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
