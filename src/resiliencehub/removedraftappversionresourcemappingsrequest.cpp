// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removedraftappversionresourcemappingsrequest.h"
#include "removedraftappversionresourcemappingsrequest_p.h"
#include "removedraftappversionresourcemappingsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::RemoveDraftAppVersionResourceMappingsRequest
 * \brief The RemoveDraftAppVersionResourceMappingsRequest class provides an interface for ResilienceHub RemoveDraftAppVersionResourceMappings requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::removeDraftAppVersionResourceMappings
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveDraftAppVersionResourceMappingsRequest::RemoveDraftAppVersionResourceMappingsRequest(const RemoveDraftAppVersionResourceMappingsRequest &other)
    : ResilienceHubRequest(new RemoveDraftAppVersionResourceMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveDraftAppVersionResourceMappingsRequest object.
 */
RemoveDraftAppVersionResourceMappingsRequest::RemoveDraftAppVersionResourceMappingsRequest()
    : ResilienceHubRequest(new RemoveDraftAppVersionResourceMappingsRequestPrivate(ResilienceHubRequest::RemoveDraftAppVersionResourceMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveDraftAppVersionResourceMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveDraftAppVersionResourceMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveDraftAppVersionResourceMappingsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveDraftAppVersionResourceMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::RemoveDraftAppVersionResourceMappingsRequestPrivate
 * \brief The RemoveDraftAppVersionResourceMappingsRequestPrivate class provides private implementation for RemoveDraftAppVersionResourceMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a RemoveDraftAppVersionResourceMappingsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
RemoveDraftAppVersionResourceMappingsRequestPrivate::RemoveDraftAppVersionResourceMappingsRequestPrivate(
    const ResilienceHubRequest::Action action, RemoveDraftAppVersionResourceMappingsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveDraftAppVersionResourceMappingsRequest
 * class' copy constructor.
 */
RemoveDraftAppVersionResourceMappingsRequestPrivate::RemoveDraftAppVersionResourceMappingsRequestPrivate(
    const RemoveDraftAppVersionResourceMappingsRequestPrivate &other, RemoveDraftAppVersionResourceMappingsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
