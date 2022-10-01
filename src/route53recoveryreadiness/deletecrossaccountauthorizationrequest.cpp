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

#include "deletecrossaccountauthorizationrequest.h"
#include "deletecrossaccountauthorizationrequest_p.h"
#include "deletecrossaccountauthorizationresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCrossAccountAuthorizationRequest
 * \brief The DeleteCrossAccountAuthorizationRequest class provides an interface for Route53RecoveryReadiness DeleteCrossAccountAuthorization requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteCrossAccountAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCrossAccountAuthorizationRequest::DeleteCrossAccountAuthorizationRequest(const DeleteCrossAccountAuthorizationRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteCrossAccountAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCrossAccountAuthorizationRequest object.
 */
DeleteCrossAccountAuthorizationRequest::DeleteCrossAccountAuthorizationRequest()
    : Route53RecoveryReadinessRequest(new DeleteCrossAccountAuthorizationRequestPrivate(Route53RecoveryReadinessRequest::DeleteCrossAccountAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCrossAccountAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCrossAccountAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCrossAccountAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCrossAccountAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCrossAccountAuthorizationRequestPrivate
 * \brief The DeleteCrossAccountAuthorizationRequestPrivate class provides private implementation for DeleteCrossAccountAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteCrossAccountAuthorizationRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteCrossAccountAuthorizationRequestPrivate::DeleteCrossAccountAuthorizationRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCrossAccountAuthorizationRequest
 * class' copy constructor.
 */
DeleteCrossAccountAuthorizationRequestPrivate::DeleteCrossAccountAuthorizationRequestPrivate(
    const DeleteCrossAccountAuthorizationRequestPrivate &other, DeleteCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
