// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverygroupsrequest.h"
#include "listrecoverygroupsrequest_p.h"
#include "listrecoverygroupsresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRecoveryGroupsRequest
 * \brief The ListRecoveryGroupsRequest class provides an interface for Route53RecoveryReadiness ListRecoveryGroups requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listRecoveryGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecoveryGroupsRequest::ListRecoveryGroupsRequest(const ListRecoveryGroupsRequest &other)
    : Route53RecoveryReadinessRequest(new ListRecoveryGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecoveryGroupsRequest object.
 */
ListRecoveryGroupsRequest::ListRecoveryGroupsRequest()
    : Route53RecoveryReadinessRequest(new ListRecoveryGroupsRequestPrivate(Route53RecoveryReadinessRequest::ListRecoveryGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecoveryGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecoveryGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecoveryGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListRecoveryGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRecoveryGroupsRequestPrivate
 * \brief The ListRecoveryGroupsRequestPrivate class provides private implementation for ListRecoveryGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListRecoveryGroupsRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
ListRecoveryGroupsRequestPrivate::ListRecoveryGroupsRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, ListRecoveryGroupsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecoveryGroupsRequest
 * class' copy constructor.
 */
ListRecoveryGroupsRequestPrivate::ListRecoveryGroupsRequestPrivate(
    const ListRecoveryGroupsRequestPrivate &other, ListRecoveryGroupsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
