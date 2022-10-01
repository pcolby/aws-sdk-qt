// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappsrequest.h"
#include "listappsrequest_p.h"
#include "listappsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppsRequest
 * \brief The ListAppsRequest class provides an interface for ResilienceHub ListApps requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listApps
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppsRequest::ListAppsRequest(const ListAppsRequest &other)
    : ResilienceHubRequest(new ListAppsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppsRequest object.
 */
ListAppsRequest::ListAppsRequest()
    : ResilienceHubRequest(new ListAppsRequestPrivate(ResilienceHubRequest::ListAppsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAppsRequestPrivate
 * \brief The ListAppsRequestPrivate class provides private implementation for ListAppsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const ResilienceHubRequest::Action action, ListAppsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppsRequest
 * class' copy constructor.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const ListAppsRequestPrivate &other, ListAppsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
