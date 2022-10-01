// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEEC2INSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEDEVICEEC2INSTANCESRESPONSE_P_H

#include "snowdevicemanagementresponse_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeDeviceEc2InstancesResponse;

class DescribeDeviceEc2InstancesResponsePrivate : public SnowDeviceManagementResponsePrivate {

public:

    explicit DescribeDeviceEc2InstancesResponsePrivate(DescribeDeviceEc2InstancesResponse * const q);

    void parseDescribeDeviceEc2InstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceEc2InstancesResponse)
    Q_DISABLE_COPY(DescribeDeviceEc2InstancesResponsePrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
