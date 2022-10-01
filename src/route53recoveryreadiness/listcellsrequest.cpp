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

#include "listcellsrequest.h"
#include "listcellsrequest_p.h"
#include "listcellsresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCellsRequest
 * \brief The ListCellsRequest class provides an interface for Route53RecoveryReadiness ListCells requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listCells
 */

/*!
 * Constructs a copy of \a other.
 */
ListCellsRequest::ListCellsRequest(const ListCellsRequest &other)
    : Route53RecoveryReadinessRequest(new ListCellsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCellsRequest object.
 */
ListCellsRequest::ListCellsRequest()
    : Route53RecoveryReadinessRequest(new ListCellsRequestPrivate(Route53RecoveryReadinessRequest::ListCellsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCellsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCellsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCellsRequest::response(QNetworkReply * const reply) const
{
    return new ListCellsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCellsRequestPrivate
 * \brief The ListCellsRequestPrivate class provides private implementation for ListCellsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListCellsRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
ListCellsRequestPrivate::ListCellsRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, ListCellsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCellsRequest
 * class' copy constructor.
 */
ListCellsRequestPrivate::ListCellsRequestPrivate(
    const ListCellsRequestPrivate &other, ListCellsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
