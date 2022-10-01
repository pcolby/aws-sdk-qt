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

#include "updatecellrequest.h"
#include "updatecellrequest_p.h"
#include "updatecellresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellRequest
 * \brief The UpdateCellRequest class provides an interface for Route53RecoveryReadiness UpdateCell requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateCell
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCellRequest::UpdateCellRequest(const UpdateCellRequest &other)
    : Route53RecoveryReadinessRequest(new UpdateCellRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCellRequest object.
 */
UpdateCellRequest::UpdateCellRequest()
    : Route53RecoveryReadinessRequest(new UpdateCellRequestPrivate(Route53RecoveryReadinessRequest::UpdateCellAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCellRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCellResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCellRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCellResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellRequestPrivate
 * \brief The UpdateCellRequestPrivate class provides private implementation for UpdateCellRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateCellRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
UpdateCellRequestPrivate::UpdateCellRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, UpdateCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCellRequest
 * class' copy constructor.
 */
UpdateCellRequestPrivate::UpdateCellRequestPrivate(
    const UpdateCellRequestPrivate &other, UpdateCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
