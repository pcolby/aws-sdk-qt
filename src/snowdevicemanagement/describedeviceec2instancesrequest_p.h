// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEEC2INSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEDEVICEEC2INSTANCESREQUEST_P_H

#include "snowdevicemanagementrequest_p.h"
#include "describedeviceec2instancesrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeDeviceEc2InstancesRequest;

class DescribeDeviceEc2InstancesRequestPrivate : public SnowDeviceManagementRequestPrivate {

public:
    DescribeDeviceEc2InstancesRequestPrivate(const SnowDeviceManagementRequest::Action action,
                                   DescribeDeviceEc2InstancesRequest * const q);
    DescribeDeviceEc2InstancesRequestPrivate(const DescribeDeviceEc2InstancesRequestPrivate &other,
                                   DescribeDeviceEc2InstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceEc2InstancesRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
