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

#include "listroutingcontrolsrequest.h"
#include "listroutingcontrolsrequest_p.h"
#include "listroutingcontrolsresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListRoutingControlsRequest
 * \brief The ListRoutingControlsRequest class provides an interface for Route53RecoveryControlConfig ListRoutingControls requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listRoutingControls
 */

/*!
 * Constructs a copy of \a other.
 */
ListRoutingControlsRequest::ListRoutingControlsRequest(const ListRoutingControlsRequest &other)
    : Route53RecoveryControlConfigRequest(new ListRoutingControlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRoutingControlsRequest object.
 */
ListRoutingControlsRequest::ListRoutingControlsRequest()
    : Route53RecoveryControlConfigRequest(new ListRoutingControlsRequestPrivate(Route53RecoveryControlConfigRequest::ListRoutingControlsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRoutingControlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRoutingControlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRoutingControlsRequest::response(QNetworkReply * const reply) const
{
    return new ListRoutingControlsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListRoutingControlsRequestPrivate
 * \brief The ListRoutingControlsRequestPrivate class provides private implementation for ListRoutingControlsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListRoutingControlsRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
ListRoutingControlsRequestPrivate::ListRoutingControlsRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, ListRoutingControlsRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRoutingControlsRequest
 * class' copy constructor.
 */
ListRoutingControlsRequestPrivate::ListRoutingControlsRequestPrivate(
    const ListRoutingControlsRequestPrivate &other, ListRoutingControlsRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
