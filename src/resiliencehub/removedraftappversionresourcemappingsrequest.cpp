/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
