// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
