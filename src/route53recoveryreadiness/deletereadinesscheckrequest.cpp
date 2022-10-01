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

#include "deletereadinesscheckrequest.h"
#include "deletereadinesscheckrequest_p.h"
#include "deletereadinesscheckresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteReadinessCheckRequest
 * \brief The DeleteReadinessCheckRequest class provides an interface for Route53RecoveryReadiness DeleteReadinessCheck requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteReadinessCheck
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReadinessCheckRequest::DeleteReadinessCheckRequest(const DeleteReadinessCheckRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteReadinessCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReadinessCheckRequest object.
 */
DeleteReadinessCheckRequest::DeleteReadinessCheckRequest()
    : Route53RecoveryReadinessRequest(new DeleteReadinessCheckRequestPrivate(Route53RecoveryReadinessRequest::DeleteReadinessCheckAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReadinessCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReadinessCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReadinessCheckRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReadinessCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteReadinessCheckRequestPrivate
 * \brief The DeleteReadinessCheckRequestPrivate class provides private implementation for DeleteReadinessCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteReadinessCheckRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteReadinessCheckRequestPrivate::DeleteReadinessCheckRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReadinessCheckRequest
 * class' copy constructor.
 */
DeleteReadinessCheckRequestPrivate::DeleteReadinessCheckRequestPrivate(
    const DeleteReadinessCheckRequestPrivate &other, DeleteReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
