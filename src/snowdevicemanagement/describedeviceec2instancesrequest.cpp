// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedeviceec2instancesrequest.h"
#include "describedeviceec2instancesrequest_p.h"
#include "describedeviceec2instancesresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::DescribeDeviceEc2InstancesRequest
 * \brief The DescribeDeviceEc2InstancesRequest class provides an interface for SnowDeviceManagement DescribeDeviceEc2Instances requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::describeDeviceEc2Instances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDeviceEc2InstancesRequest::DescribeDeviceEc2InstancesRequest(const DescribeDeviceEc2InstancesRequest &other)
    : SnowDeviceManagementRequest(new DescribeDeviceEc2InstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDeviceEc2InstancesRequest object.
 */
DescribeDeviceEc2InstancesRequest::DescribeDeviceEc2InstancesRequest()
    : SnowDeviceManagementRequest(new DescribeDeviceEc2InstancesRequestPrivate(SnowDeviceManagementRequest::DescribeDeviceEc2InstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDeviceEc2InstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDeviceEc2InstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeviceEc2InstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeviceEc2InstancesResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::DescribeDeviceEc2InstancesRequestPrivate
 * \brief The DescribeDeviceEc2InstancesRequestPrivate class provides private implementation for DescribeDeviceEc2InstancesRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a DescribeDeviceEc2InstancesRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
DescribeDeviceEc2InstancesRequestPrivate::DescribeDeviceEc2InstancesRequestPrivate(
    const SnowDeviceManagementRequest::Action action, DescribeDeviceEc2InstancesRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeviceEc2InstancesRequest
 * class' copy constructor.
 */
DescribeDeviceEc2InstancesRequestPrivate::DescribeDeviceEc2InstancesRequestPrivate(
    const DescribeDeviceEc2InstancesRequestPrivate &other, DescribeDeviceEc2InstancesRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
