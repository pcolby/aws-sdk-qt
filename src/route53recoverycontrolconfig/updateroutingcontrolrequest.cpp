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

#include "updateroutingcontrolrequest.h"
#include "updateroutingcontrolrequest_p.h"
#include "updateroutingcontrolresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateRoutingControlRequest
 * \brief The UpdateRoutingControlRequest class provides an interface for Route53RecoveryControlConfig UpdateRoutingControl requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::updateRoutingControl
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRoutingControlRequest::UpdateRoutingControlRequest(const UpdateRoutingControlRequest &other)
    : Route53RecoveryControlConfigRequest(new UpdateRoutingControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRoutingControlRequest object.
 */
UpdateRoutingControlRequest::UpdateRoutingControlRequest()
    : Route53RecoveryControlConfigRequest(new UpdateRoutingControlRequestPrivate(Route53RecoveryControlConfigRequest::UpdateRoutingControlAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRoutingControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRoutingControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRoutingControlRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoutingControlResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateRoutingControlRequestPrivate
 * \brief The UpdateRoutingControlRequestPrivate class provides private implementation for UpdateRoutingControlRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UpdateRoutingControlRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
UpdateRoutingControlRequestPrivate::UpdateRoutingControlRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, UpdateRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoutingControlRequest
 * class' copy constructor.
 */
UpdateRoutingControlRequestPrivate::UpdateRoutingControlRequestPrivate(
    const UpdateRoutingControlRequestPrivate &other, UpdateRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
