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

#include "createcrossaccountauthorizationrequest.h"
#include "createcrossaccountauthorizationrequest_p.h"
#include "createcrossaccountauthorizationresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCrossAccountAuthorizationRequest
 * \brief The CreateCrossAccountAuthorizationRequest class provides an interface for Route53RecoveryReadiness CreateCrossAccountAuthorization requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createCrossAccountAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCrossAccountAuthorizationRequest::CreateCrossAccountAuthorizationRequest(const CreateCrossAccountAuthorizationRequest &other)
    : Route53RecoveryReadinessRequest(new CreateCrossAccountAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCrossAccountAuthorizationRequest object.
 */
CreateCrossAccountAuthorizationRequest::CreateCrossAccountAuthorizationRequest()
    : Route53RecoveryReadinessRequest(new CreateCrossAccountAuthorizationRequestPrivate(Route53RecoveryReadinessRequest::CreateCrossAccountAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCrossAccountAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCrossAccountAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCrossAccountAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateCrossAccountAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCrossAccountAuthorizationRequestPrivate
 * \brief The CreateCrossAccountAuthorizationRequestPrivate class provides private implementation for CreateCrossAccountAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateCrossAccountAuthorizationRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
CreateCrossAccountAuthorizationRequestPrivate::CreateCrossAccountAuthorizationRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, CreateCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCrossAccountAuthorizationRequest
 * class' copy constructor.
 */
CreateCrossAccountAuthorizationRequestPrivate::CreateCrossAccountAuthorizationRequestPrivate(
    const CreateCrossAccountAuthorizationRequestPrivate &other, CreateCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
