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

#include "getreadinesscheckrequest.h"
#include "getreadinesscheckrequest_p.h"
#include "getreadinesscheckresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckRequest
 * \brief The GetReadinessCheckRequest class provides an interface for Route53RecoveryReadiness GetReadinessCheck requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheck
 */

/*!
 * Constructs a copy of \a other.
 */
GetReadinessCheckRequest::GetReadinessCheckRequest(const GetReadinessCheckRequest &other)
    : Route53RecoveryReadinessRequest(new GetReadinessCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReadinessCheckRequest object.
 */
GetReadinessCheckRequest::GetReadinessCheckRequest()
    : Route53RecoveryReadinessRequest(new GetReadinessCheckRequestPrivate(Route53RecoveryReadinessRequest::GetReadinessCheckAction, this))
{

}

/*!
 * \reimp
 */
bool GetReadinessCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReadinessCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReadinessCheckRequest::response(QNetworkReply * const reply) const
{
    return new GetReadinessCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckRequestPrivate
 * \brief The GetReadinessCheckRequestPrivate class provides private implementation for GetReadinessCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetReadinessCheckRequestPrivate::GetReadinessCheckRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReadinessCheckRequest
 * class' copy constructor.
 */
GetReadinessCheckRequestPrivate::GetReadinessCheckRequestPrivate(
    const GetReadinessCheckRequestPrivate &other, GetReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
