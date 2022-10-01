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
