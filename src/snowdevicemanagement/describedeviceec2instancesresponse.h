// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEEC2INSTANCESRESPONSE_H
#define QTAWS_DESCRIBEDEVICEEC2INSTANCESRESPONSE_H

#include "snowdevicemanagementresponse.h"
#include "describedeviceec2instancesrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeDeviceEc2InstancesResponsePrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT DescribeDeviceEc2InstancesResponse : public SnowDeviceManagementResponse {
    Q_OBJECT

public:
    DescribeDeviceEc2InstancesResponse(const DescribeDeviceEc2InstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeviceEc2InstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceEc2InstancesResponse)
    Q_DISABLE_COPY(DescribeDeviceEc2InstancesResponse)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
