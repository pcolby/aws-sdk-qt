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

#include "createrecoverygrouprequest.h"
#include "createrecoverygrouprequest_p.h"
#include "createrecoverygroupresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateRecoveryGroupRequest
 * \brief The CreateRecoveryGroupRequest class provides an interface for Route53RecoveryReadiness CreateRecoveryGroup requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createRecoveryGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRecoveryGroupRequest::CreateRecoveryGroupRequest(const CreateRecoveryGroupRequest &other)
    : Route53RecoveryReadinessRequest(new CreateRecoveryGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRecoveryGroupRequest object.
 */
CreateRecoveryGroupRequest::CreateRecoveryGroupRequest()
    : Route53RecoveryReadinessRequest(new CreateRecoveryGroupRequestPrivate(Route53RecoveryReadinessRequest::CreateRecoveryGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRecoveryGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRecoveryGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRecoveryGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateRecoveryGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateRecoveryGroupRequestPrivate
 * \brief The CreateRecoveryGroupRequestPrivate class provides private implementation for CreateRecoveryGroupRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateRecoveryGroupRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
CreateRecoveryGroupRequestPrivate::CreateRecoveryGroupRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, CreateRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRecoveryGroupRequest
 * class' copy constructor.
 */
CreateRecoveryGroupRequestPrivate::CreateRecoveryGroupRequestPrivate(
    const CreateRecoveryGroupRequestPrivate &other, CreateRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
