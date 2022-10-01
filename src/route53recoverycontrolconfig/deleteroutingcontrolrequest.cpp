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

#include "deleteroutingcontrolrequest.h"
#include "deleteroutingcontrolrequest_p.h"
#include "deleteroutingcontrolresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteRoutingControlRequest
 * \brief The DeleteRoutingControlRequest class provides an interface for Route53RecoveryControlConfig DeleteRoutingControl requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteRoutingControl
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRoutingControlRequest::DeleteRoutingControlRequest(const DeleteRoutingControlRequest &other)
    : Route53RecoveryControlConfigRequest(new DeleteRoutingControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRoutingControlRequest object.
 */
DeleteRoutingControlRequest::DeleteRoutingControlRequest()
    : Route53RecoveryControlConfigRequest(new DeleteRoutingControlRequestPrivate(Route53RecoveryControlConfigRequest::DeleteRoutingControlAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRoutingControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRoutingControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRoutingControlRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRoutingControlResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteRoutingControlRequestPrivate
 * \brief The DeleteRoutingControlRequestPrivate class provides private implementation for DeleteRoutingControlRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteRoutingControlRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
DeleteRoutingControlRequestPrivate::DeleteRoutingControlRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, DeleteRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRoutingControlRequest
 * class' copy constructor.
 */
DeleteRoutingControlRequestPrivate::DeleteRoutingControlRequestPrivate(
    const DeleteRoutingControlRequestPrivate &other, DeleteRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
