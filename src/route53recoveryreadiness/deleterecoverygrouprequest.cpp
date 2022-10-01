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

#include "deleterecoverygrouprequest.h"
#include "deleterecoverygrouprequest_p.h"
#include "deleterecoverygroupresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteRecoveryGroupRequest
 * \brief The DeleteRecoveryGroupRequest class provides an interface for Route53RecoveryReadiness DeleteRecoveryGroup requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteRecoveryGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecoveryGroupRequest::DeleteRecoveryGroupRequest(const DeleteRecoveryGroupRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteRecoveryGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecoveryGroupRequest object.
 */
DeleteRecoveryGroupRequest::DeleteRecoveryGroupRequest()
    : Route53RecoveryReadinessRequest(new DeleteRecoveryGroupRequestPrivate(Route53RecoveryReadinessRequest::DeleteRecoveryGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecoveryGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecoveryGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecoveryGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecoveryGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteRecoveryGroupRequestPrivate
 * \brief The DeleteRecoveryGroupRequestPrivate class provides private implementation for DeleteRecoveryGroupRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteRecoveryGroupRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteRecoveryGroupRequestPrivate::DeleteRecoveryGroupRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecoveryGroupRequest
 * class' copy constructor.
 */
DeleteRecoveryGroupRequestPrivate::DeleteRecoveryGroupRequestPrivate(
    const DeleteRecoveryGroupRequestPrivate &other, DeleteRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
