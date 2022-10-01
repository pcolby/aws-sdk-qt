// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEREQUEST_H
#define QTAWS_DESCRIBEDEVICEREQUEST_H

#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeDeviceRequestPrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT DescribeDeviceRequest : public SnowDeviceManagementRequest {

public:
    DescribeDeviceRequest(const DescribeDeviceRequest &other);
    DescribeDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
