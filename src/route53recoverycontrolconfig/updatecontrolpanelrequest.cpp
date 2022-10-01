// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
