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

#include "updaterecoverygrouprequest.h"
#include "updaterecoverygrouprequest_p.h"
#include "updaterecoverygroupresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateRecoveryGroupRequest
 * \brief The UpdateRecoveryGroupRequest class provides an interface for Route53RecoveryReadiness UpdateRecoveryGroup requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateRecoveryGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecoveryGroupRequest::UpdateRecoveryGroupRequest(const UpdateRecoveryGroupRequest &other)
    : Route53RecoveryReadinessRequest(new UpdateRecoveryGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecoveryGroupRequest object.
 */
UpdateRecoveryGroupRequest::UpdateRecoveryGroupRequest()
    : Route53RecoveryReadinessRequest(new UpdateRecoveryGroupRequestPrivate(Route53RecoveryReadinessRequest::UpdateRecoveryGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecoveryGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecoveryGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecoveryGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecoveryGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateRecoveryGroupRequestPrivate
 * \brief The UpdateRecoveryGroupRequestPrivate class provides private implementation for UpdateRecoveryGroupRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateRecoveryGroupRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
UpdateRecoveryGroupRequestPrivate::UpdateRecoveryGroupRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, UpdateRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecoveryGroupRequest
 * class' copy constructor.
 */
UpdateRecoveryGroupRequestPrivate::UpdateRecoveryGroupRequestPrivate(
    const UpdateRecoveryGroupRequestPrivate &other, UpdateRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
