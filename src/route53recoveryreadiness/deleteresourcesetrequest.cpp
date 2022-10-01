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

#include "deleteresourcesetrequest.h"
#include "deleteresourcesetrequest_p.h"
#include "deleteresourcesetresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetRequest
 * \brief The DeleteResourceSetRequest class provides an interface for Route53RecoveryReadiness DeleteResourceSet requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteResourceSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceSetRequest::DeleteResourceSetRequest(const DeleteResourceSetRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteResourceSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceSetRequest object.
 */
DeleteResourceSetRequest::DeleteResourceSetRequest()
    : Route53RecoveryReadinessRequest(new DeleteResourceSetRequestPrivate(Route53RecoveryReadinessRequest::DeleteResourceSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetRequestPrivate
 * \brief The DeleteResourceSetRequestPrivate class provides private implementation for DeleteResourceSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteResourceSetRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteResourceSetRequestPrivate::DeleteResourceSetRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceSetRequest
 * class' copy constructor.
 */
DeleteResourceSetRequestPrivate::DeleteResourceSetRequestPrivate(
    const DeleteResourceSetRequestPrivate &other, DeleteResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
