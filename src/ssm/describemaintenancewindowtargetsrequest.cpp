/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describemaintenancewindowtargetsrequest.h"
#include "describemaintenancewindowtargetsrequest_p.h"
#include "describemaintenancewindowtargetsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::DescribeMaintenanceWindowTargetsRequest
 * \brief The DescribeMaintenanceWindowTargetsRequest class provides an interface for SSM DescribeMaintenanceWindowTargets requests.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 * 
 *  Prerequisites</a>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SSMClient::describeMaintenanceWindowTargets
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMaintenanceWindowTargetsRequest::DescribeMaintenanceWindowTargetsRequest(const DescribeMaintenanceWindowTargetsRequest &other)
    : SSMRequest(new DescribeMaintenanceWindowTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMaintenanceWindowTargetsRequest object.
 */
DescribeMaintenanceWindowTargetsRequest::DescribeMaintenanceWindowTargetsRequest()
    : SSMRequest(new DescribeMaintenanceWindowTargetsRequestPrivate(SSMRequest::DescribeMaintenanceWindowTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMaintenanceWindowTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMaintenanceWindowTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMaintenanceWindowTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::DescribeMaintenanceWindowTargetsRequestPrivate
 * \brief The DescribeMaintenanceWindowTargetsRequestPrivate class provides private implementation for DescribeMaintenanceWindowTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 *
 * Constructs a DescribeMaintenanceWindowTargetsRequestPrivate object for SSM \a action with,
 * public implementation \a q.
 */
DescribeMaintenanceWindowTargetsRequestPrivate::DescribeMaintenanceWindowTargetsRequestPrivate(
    const SSMRequest::Action action, DescribeMaintenanceWindowTargetsRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowTargetsRequest
 * class' copy constructor.
 */
DescribeMaintenanceWindowTargetsRequestPrivate::DescribeMaintenanceWindowTargetsRequestPrivate(
    const DescribeMaintenanceWindowTargetsRequestPrivate &other, DescribeMaintenanceWindowTargetsRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
