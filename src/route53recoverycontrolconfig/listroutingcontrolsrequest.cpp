// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
