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

#include "createresourcesetrequest.h"
#include "createresourcesetrequest_p.h"
#include "createresourcesetresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetRequest
 * \brief The CreateResourceSetRequest class provides an interface for Route53RecoveryReadiness CreateResourceSet requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createResourceSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceSetRequest::CreateResourceSetRequest(const CreateResourceSetRequest &other)
    : Route53RecoveryReadinessRequest(new CreateResourceSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceSetRequest object.
 */
CreateResourceSetRequest::CreateResourceSetRequest()
    : Route53RecoveryReadinessRequest(new CreateResourceSetRequestPrivate(Route53RecoveryReadinessRequest::CreateResourceSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetRequestPrivate
 * \brief The CreateResourceSetRequestPrivate class provides private implementation for CreateResourceSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateResourceSetRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
CreateResourceSetRequestPrivate::CreateResourceSetRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, CreateResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceSetRequest
 * class' copy constructor.
 */
CreateResourceSetRequestPrivate::CreateResourceSetRequestPrivate(
    const CreateResourceSetRequestPrivate &other, CreateResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
