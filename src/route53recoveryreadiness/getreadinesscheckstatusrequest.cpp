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

#include "getreadinesscheckstatusrequest.h"
#include "getreadinesscheckstatusrequest_p.h"
#include "getreadinesscheckstatusresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusRequest
 * \brief The GetReadinessCheckStatusRequest class provides an interface for Route53RecoveryReadiness GetReadinessCheckStatus requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheckStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetReadinessCheckStatusRequest::GetReadinessCheckStatusRequest(const GetReadinessCheckStatusRequest &other)
    : Route53RecoveryReadinessRequest(new GetReadinessCheckStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReadinessCheckStatusRequest object.
 */
GetReadinessCheckStatusRequest::GetReadinessCheckStatusRequest()
    : Route53RecoveryReadinessRequest(new GetReadinessCheckStatusRequestPrivate(Route53RecoveryReadinessRequest::GetReadinessCheckStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetReadinessCheckStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReadinessCheckStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReadinessCheckStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetReadinessCheckStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusRequestPrivate
 * \brief The GetReadinessCheckStatusRequestPrivate class provides private implementation for GetReadinessCheckStatusRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckStatusRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetReadinessCheckStatusRequestPrivate::GetReadinessCheckStatusRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetReadinessCheckStatusRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReadinessCheckStatusRequest
 * class' copy constructor.
 */
GetReadinessCheckStatusRequestPrivate::GetReadinessCheckStatusRequestPrivate(
    const GetReadinessCheckStatusRequestPrivate &other, GetReadinessCheckStatusRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
