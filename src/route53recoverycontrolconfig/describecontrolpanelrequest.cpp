// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontrolpanelrequest.h"
#include "describecontrolpanelrequest_p.h"
#include "describecontrolpanelresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeControlPanelRequest
 * \brief The DescribeControlPanelRequest class provides an interface for Route53RecoveryControlConfig DescribeControlPanel requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::describeControlPanel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeControlPanelRequest::DescribeControlPanelRequest(const DescribeControlPanelRequest &other)
    : Route53RecoveryControlConfigRequest(new DescribeControlPanelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeControlPanelRequest object.
 */
DescribeControlPanelRequest::DescribeControlPanelRequest()
    : Route53RecoveryControlConfigRequest(new DescribeControlPanelRequestPrivate(Route53RecoveryControlConfigRequest::DescribeControlPanelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeControlPanelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeControlPanelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeControlPanelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeControlPanelResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeControlPanelRequestPrivate
 * \brief The DescribeControlPanelRequestPrivate class provides private implementation for DescribeControlPanelRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DescribeControlPanelRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
DescribeControlPanelRequestPrivate::DescribeControlPanelRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, DescribeControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeControlPanelRequest
 * class' copy constructor.
 */
DescribeControlPanelRequestPrivate::DescribeControlPanelRequestPrivate(
    const DescribeControlPanelRequestPrivate &other, DescribeControlPanelRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
