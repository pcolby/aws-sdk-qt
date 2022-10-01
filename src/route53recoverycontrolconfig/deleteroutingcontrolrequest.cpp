// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
