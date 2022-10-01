// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecellrequest.h"
#include "deletecellrequest_p.h"
#include "deletecellresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCellRequest
 * \brief The DeleteCellRequest class provides an interface for Route53RecoveryReadiness DeleteCell requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteCell
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCellRequest::DeleteCellRequest(const DeleteCellRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteCellRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCellRequest object.
 */
DeleteCellRequest::DeleteCellRequest()
    : Route53RecoveryReadinessRequest(new DeleteCellRequestPrivate(Route53RecoveryReadinessRequest::DeleteCellAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCellRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCellResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCellRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCellResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCellRequestPrivate
 * \brief The DeleteCellRequestPrivate class provides private implementation for DeleteCellRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteCellRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteCellRequestPrivate::DeleteCellRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCellRequest
 * class' copy constructor.
 */
DeleteCellRequestPrivate::DeleteCellRequestPrivate(
    const DeleteCellRequestPrivate &other, DeleteCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
