// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
