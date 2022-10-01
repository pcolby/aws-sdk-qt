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

#include "getrecoverygrouprequest.h"
#include "getrecoverygrouprequest_p.h"
#include "getrecoverygroupresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupRequest
 * \brief The GetRecoveryGroupRequest class provides an interface for Route53RecoveryReadiness GetRecoveryGroup requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getRecoveryGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecoveryGroupRequest::GetRecoveryGroupRequest(const GetRecoveryGroupRequest &other)
    : Route53RecoveryReadinessRequest(new GetRecoveryGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecoveryGroupRequest object.
 */
GetRecoveryGroupRequest::GetRecoveryGroupRequest()
    : Route53RecoveryReadinessRequest(new GetRecoveryGroupRequestPrivate(Route53RecoveryReadinessRequest::GetRecoveryGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecoveryGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecoveryGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecoveryGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetRecoveryGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupRequestPrivate
 * \brief The GetRecoveryGroupRequestPrivate class provides private implementation for GetRecoveryGroupRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetRecoveryGroupRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetRecoveryGroupRequestPrivate::GetRecoveryGroupRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecoveryGroupRequest
 * class' copy constructor.
 */
GetRecoveryGroupRequestPrivate::GetRecoveryGroupRequestPrivate(
    const GetRecoveryGroupRequestPrivate &other, GetRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
