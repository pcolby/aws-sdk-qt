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

#include "updatecontrolpanelrequest.h"
#include "updatecontrolpanelrequest_p.h"
#include "updatecontrolpanelresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateControlPanelRequest
 * \brief The UpdateControlPanelRequest class provides an interface for Route53RecoveryControlConfig UpdateControlPanel requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::updateControlPanel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateControlPanelRequest::UpdateControlPanelRequest(const UpdateControlPanelRequest &other)
    : Route53RecoveryControlConfigRequest(new UpdateControlPanelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateControlPanelRequest object.
 */
UpdateControlPanelRequest::UpdateControlPanelRequest()
    : Route53RecoveryControlConfigRequest(new UpdateControlPanelRequestPrivate(Route53RecoveryControlConfigRequest::UpdateControlPanelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateControlPanelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateControlPanelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateControlPanelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateControlPanelResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateControlPanelRequestPrivate
 * \brief The UpdateControlPanelRequestPrivate class provides private implementation for UpdateControlPanelRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UpdateControlPanelRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
UpdateControlPanelRequestPrivate::UpdateControlPanelRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, UpdateControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateControlPanelRequest
 * class' copy constructor.
 */
UpdateControlPanelRequestPrivate::UpdateControlPanelRequestPrivate(
    const UpdateControlPanelRequestPrivate &other, UpdateControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
