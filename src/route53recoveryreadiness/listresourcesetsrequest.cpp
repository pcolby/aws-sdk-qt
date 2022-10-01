// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesetsrequest.h"
#include "listresourcesetsrequest_p.h"
#include "listresourcesetsresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListResourceSetsRequest
 * \brief The ListResourceSetsRequest class provides an interface for Route53RecoveryReadiness ListResourceSets requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listResourceSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceSetsRequest::ListResourceSetsRequest(const ListResourceSetsRequest &other)
    : Route53RecoveryReadinessRequest(new ListResourceSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceSetsRequest object.
 */
ListResourceSetsRequest::ListResourceSetsRequest()
    : Route53RecoveryReadinessRequest(new ListResourceSetsRequestPrivate(Route53RecoveryReadinessRequest::ListResourceSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListResourceSetsRequestPrivate
 * \brief The ListResourceSetsRequestPrivate class provides private implementation for ListResourceSetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListResourceSetsRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
ListResourceSetsRequestPrivate::ListResourceSetsRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, ListResourceSetsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceSetsRequest
 * class' copy constructor.
 */
ListResourceSetsRequestPrivate::ListResourceSetsRequestPrivate(
    const ListResourceSetsRequestPrivate &other, ListResourceSetsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
