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

#include "getcellrequest.h"
#include "getcellrequest_p.h"
#include "getcellresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellRequest
 * \brief The GetCellRequest class provides an interface for Route53RecoveryReadiness GetCell requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getCell
 */

/*!
 * Constructs a copy of \a other.
 */
GetCellRequest::GetCellRequest(const GetCellRequest &other)
    : Route53RecoveryReadinessRequest(new GetCellRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCellRequest object.
 */
GetCellRequest::GetCellRequest()
    : Route53RecoveryReadinessRequest(new GetCellRequestPrivate(Route53RecoveryReadinessRequest::GetCellAction, this))
{

}

/*!
 * \reimp
 */
bool GetCellRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCellResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCellRequest::response(QNetworkReply * const reply) const
{
    return new GetCellResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellRequestPrivate
 * \brief The GetCellRequestPrivate class provides private implementation for GetCellRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetCellRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetCellRequestPrivate::GetCellRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCellRequest
 * class' copy constructor.
 */
GetCellRequestPrivate::GetCellRequestPrivate(
    const GetCellRequestPrivate &other, GetCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
