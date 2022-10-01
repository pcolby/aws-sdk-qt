// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontrolpanelrequest.h"
#include "createcontrolpanelrequest_p.h"
#include "createcontrolpanelresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateControlPanelRequest
 * \brief The CreateControlPanelRequest class provides an interface for Route53RecoveryControlConfig CreateControlPanel requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::createControlPanel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateControlPanelRequest::CreateControlPanelRequest(const CreateControlPanelRequest &other)
    : Route53RecoveryControlConfigRequest(new CreateControlPanelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateControlPanelRequest object.
 */
CreateControlPanelRequest::CreateControlPanelRequest()
    : Route53RecoveryControlConfigRequest(new CreateControlPanelRequestPrivate(Route53RecoveryControlConfigRequest::CreateControlPanelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateControlPanelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateControlPanelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateControlPanelRequest::response(QNetworkReply * const reply) const
{
    return new CreateControlPanelResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateControlPanelRequestPrivate
 * \brief The CreateControlPanelRequestPrivate class provides private implementation for CreateControlPanelRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a CreateControlPanelRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
CreateControlPanelRequestPrivate::CreateControlPanelRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, CreateControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateControlPanelRequest
 * class' copy constructor.
 */
CreateControlPanelRequestPrivate::CreateControlPanelRequestPrivate(
    const CreateControlPanelRequestPrivate &other, CreateControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
