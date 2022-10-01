// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resolveappversionresourcesrequest.h"
#include "resolveappversionresourcesrequest_p.h"
#include "resolveappversionresourcesresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ResolveAppVersionResourcesRequest
 * \brief The ResolveAppVersionResourcesRequest class provides an interface for ResilienceHub ResolveAppVersionResources requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::resolveAppVersionResources
 */

/*!
 * Constructs a copy of \a other.
 */
ResolveAppVersionResourcesRequest::ResolveAppVersionResourcesRequest(const ResolveAppVersionResourcesRequest &other)
    : ResilienceHubRequest(new ResolveAppVersionResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResolveAppVersionResourcesRequest object.
 */
ResolveAppVersionResourcesRequest::ResolveAppVersionResourcesRequest()
    : ResilienceHubRequest(new ResolveAppVersionResourcesRequestPrivate(ResilienceHubRequest::ResolveAppVersionResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ResolveAppVersionResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResolveAppVersionResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResolveAppVersionResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ResolveAppVersionResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ResolveAppVersionResourcesRequestPrivate
 * \brief The ResolveAppVersionResourcesRequestPrivate class provides private implementation for ResolveAppVersionResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ResolveAppVersionResourcesRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ResolveAppVersionResourcesRequestPrivate::ResolveAppVersionResourcesRequestPrivate(
    const ResilienceHubRequest::Action action, ResolveAppVersionResourcesRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResolveAppVersionResourcesRequest
 * class' copy constructor.
 */
ResolveAppVersionResourcesRequestPrivate::ResolveAppVersionResourcesRequestPrivate(
    const ResolveAppVersionResourcesRequestPrivate &other, ResolveAppVersionResourcesRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
