// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
