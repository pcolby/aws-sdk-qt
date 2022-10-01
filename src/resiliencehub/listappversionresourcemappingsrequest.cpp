// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappversionresourcemappingsrequest.h"
#include "listappversionresourcemappingsrequest_p.h"
#include "listappversionresourcemappingsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourceMappingsRequest
 * \brief The ListAppVersionResourceMappingsRequest class provides an interface for ResilienceHub ListAppVersionResourceMappings requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppVersionResourceMappings
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppVersionResourceMappingsRequest::ListAppVersionResourceMappingsRequest(const ListAppVersionResourceMappingsRequest &other)
    : ResilienceHubRequest(new ListAppVersionResourceMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppVersionResourceMappingsRequest object.
 */
ListAppVersionResourceMappingsRequest::ListAppVersionResourceMappingsRequest()
    : ResilienceHubRequest(new ListAppVersionResourceMappingsRequestPrivate(ResilienceHubRequest::ListAppVersionResourceMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppVersionResourceMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppVersionResourceMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppVersionResourceMappingsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppVersionResourceMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourceMappingsRequestPrivate
 * \brief The ListAppVersionResourceMappingsRequestPrivate class provides private implementation for ListAppVersionResourceMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppVersionResourceMappingsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAppVersionResourceMappingsRequestPrivate::ListAppVersionResourceMappingsRequestPrivate(
    const ResilienceHubRequest::Action action, ListAppVersionResourceMappingsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppVersionResourceMappingsRequest
 * class' copy constructor.
 */
ListAppVersionResourceMappingsRequestPrivate::ListAppVersionResourceMappingsRequestPrivate(
    const ListAppVersionResourceMappingsRequestPrivate &other, ListAppVersionResourceMappingsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
