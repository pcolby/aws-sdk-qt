// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreadinesschecksrequest.h"
#include "listreadinesschecksrequest_p.h"
#include "listreadinesschecksresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListReadinessChecksRequest
 * \brief The ListReadinessChecksRequest class provides an interface for Route53RecoveryReadiness ListReadinessChecks requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listReadinessChecks
 */

/*!
 * Constructs a copy of \a other.
 */
ListReadinessChecksRequest::ListReadinessChecksRequest(const ListReadinessChecksRequest &other)
    : Route53RecoveryReadinessRequest(new ListReadinessChecksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReadinessChecksRequest object.
 */
ListReadinessChecksRequest::ListReadinessChecksRequest()
    : Route53RecoveryReadinessRequest(new ListReadinessChecksRequestPrivate(Route53RecoveryReadinessRequest::ListReadinessChecksAction, this))
{

}

/*!
 * \reimp
 */
bool ListReadinessChecksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReadinessChecksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReadinessChecksRequest::response(QNetworkReply * const reply) const
{
    return new ListReadinessChecksResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListReadinessChecksRequestPrivate
 * \brief The ListReadinessChecksRequestPrivate class provides private implementation for ListReadinessChecksRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListReadinessChecksRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
ListReadinessChecksRequestPrivate::ListReadinessChecksRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, ListReadinessChecksRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReadinessChecksRequest
 * class' copy constructor.
 */
ListReadinessChecksRequestPrivate::ListReadinessChecksRequestPrivate(
    const ListReadinessChecksRequestPrivate &other, ListReadinessChecksRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
