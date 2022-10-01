// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICERESPONSE_P_H
#define QTAWS_DESCRIBEDEVICERESPONSE_P_H

#include "snowdevicemanagementresponse_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeDeviceResponse;

class DescribeDeviceResponsePrivate : public SnowDeviceManagementResponsePrivate {

public:

    explicit DescribeDeviceResponsePrivate(DescribeDeviceResponse * const q);

    void parseDescribeDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceResponse)
    Q_DISABLE_COPY(DescribeDeviceResponsePrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
