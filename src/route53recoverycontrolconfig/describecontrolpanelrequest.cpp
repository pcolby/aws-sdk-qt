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
