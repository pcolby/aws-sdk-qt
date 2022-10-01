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

#include "deletecontrolpanelrequest.h"
#include "deletecontrolpanelrequest_p.h"
#include "deletecontrolpanelresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteControlPanelRequest
 * \brief The DeleteControlPanelRequest class provides an interface for Route53RecoveryControlConfig DeleteControlPanel requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteControlPanel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteControlPanelRequest::DeleteControlPanelRequest(const DeleteControlPanelRequest &other)
    : Route53RecoveryControlConfigRequest(new DeleteControlPanelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteControlPanelRequest object.
 */
DeleteControlPanelRequest::DeleteControlPanelRequest()
    : Route53RecoveryControlConfigRequest(new DeleteControlPanelRequestPrivate(Route53RecoveryControlConfigRequest::DeleteControlPanelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteControlPanelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteControlPanelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteControlPanelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteControlPanelResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteControlPanelRequestPrivate
 * \brief The DeleteControlPanelRequestPrivate class provides private implementation for DeleteControlPanelRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteControlPanelRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
DeleteControlPanelRequestPrivate::DeleteControlPanelRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, DeleteControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteControlPanelRequest
 * class' copy constructor.
 */
DeleteControlPanelRequestPrivate::DeleteControlPanelRequestPrivate(
    const DeleteControlPanelRequestPrivate &other, DeleteControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
