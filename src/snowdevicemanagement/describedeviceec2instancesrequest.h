// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEEC2INSTANCESREQUEST_H
#define QTAWS_DESCRIBEDEVICEEC2INSTANCESREQUEST_H

#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeDeviceEc2InstancesRequestPrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT DescribeDeviceEc2InstancesRequest : public SnowDeviceManagementRequest {

public:
    DescribeDeviceEc2InstancesRequest(const DescribeDeviceEc2InstancesRequest &other);
    DescribeDeviceEc2InstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceEc2InstancesRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
