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

#include "deletecellrequest.h"
#include "deletecellrequest_p.h"
#include "deletecellresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCellRequest
 * \brief The DeleteCellRequest class provides an interface for Route53RecoveryReadiness DeleteCell requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteCell
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCellRequest::DeleteCellRequest(const DeleteCellRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteCellRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCellRequest object.
 */
DeleteCellRequest::DeleteCellRequest()
    : Route53RecoveryReadinessRequest(new DeleteCellRequestPrivate(Route53RecoveryReadinessRequest::DeleteCellAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCellRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCellResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCellRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCellResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCellRequestPrivate
 * \brief The DeleteCellRequestPrivate class provides private implementation for DeleteCellRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteCellRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteCellRequestPrivate::DeleteCellRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCellRequest
 * class' copy constructor.
 */
DeleteCellRequestPrivate::DeleteCellRequestPrivate(
    const DeleteCellRequestPrivate &other, DeleteCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
