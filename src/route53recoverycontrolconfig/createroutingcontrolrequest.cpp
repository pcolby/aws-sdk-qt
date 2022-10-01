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

#include "createroutingcontrolrequest.h"
#include "createroutingcontrolrequest_p.h"
#include "createroutingcontrolresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateRoutingControlRequest
 * \brief The CreateRoutingControlRequest class provides an interface for Route53RecoveryControlConfig CreateRoutingControl requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::createRoutingControl
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRoutingControlRequest::CreateRoutingControlRequest(const CreateRoutingControlRequest &other)
    : Route53RecoveryControlConfigRequest(new CreateRoutingControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRoutingControlRequest object.
 */
CreateRoutingControlRequest::CreateRoutingControlRequest()
    : Route53RecoveryControlConfigRequest(new CreateRoutingControlRequestPrivate(Route53RecoveryControlConfigRequest::CreateRoutingControlAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRoutingControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRoutingControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRoutingControlRequest::response(QNetworkReply * const reply) const
{
    return new CreateRoutingControlResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateRoutingControlRequestPrivate
 * \brief The CreateRoutingControlRequestPrivate class provides private implementation for CreateRoutingControlRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a CreateRoutingControlRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
CreateRoutingControlRequestPrivate::CreateRoutingControlRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, CreateRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRoutingControlRequest
 * class' copy constructor.
 */
CreateRoutingControlRequestPrivate::CreateRoutingControlRequestPrivate(
    const CreateRoutingControlRequestPrivate &other, CreateRoutingControlRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
