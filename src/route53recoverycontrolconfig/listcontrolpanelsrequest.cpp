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

#include "listcontrolpanelsrequest.h"
#include "listcontrolpanelsrequest_p.h"
#include "listcontrolpanelsresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListControlPanelsRequest
 * \brief The ListControlPanelsRequest class provides an interface for Route53RecoveryControlConfig ListControlPanels requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listControlPanels
 */

/*!
 * Constructs a copy of \a other.
 */
ListControlPanelsRequest::ListControlPanelsRequest(const ListControlPanelsRequest &other)
    : Route53RecoveryControlConfigRequest(new ListControlPanelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListControlPanelsRequest object.
 */
ListControlPanelsRequest::ListControlPanelsRequest()
    : Route53RecoveryControlConfigRequest(new ListControlPanelsRequestPrivate(Route53RecoveryControlConfigRequest::ListControlPanelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListControlPanelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListControlPanelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListControlPanelsRequest::response(QNetworkReply * const reply) const
{
    return new ListControlPanelsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListControlPanelsRequestPrivate
 * \brief The ListControlPanelsRequestPrivate class provides private implementation for ListControlPanelsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListControlPanelsRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
ListControlPanelsRequestPrivate::ListControlPanelsRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, ListControlPanelsRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListControlPanelsRequest
 * class' copy constructor.
 */
ListControlPanelsRequestPrivate::ListControlPanelsRequestPrivate(
    const ListControlPanelsRequestPrivate &other, ListControlPanelsRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
