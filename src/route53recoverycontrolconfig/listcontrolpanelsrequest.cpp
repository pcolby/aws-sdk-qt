// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
