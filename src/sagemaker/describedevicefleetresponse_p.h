// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEFLEETRESPONSE_P_H
#define QTAWS_DESCRIBEDEVICEFLEETRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeDeviceFleetResponse;

class DescribeDeviceFleetResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeDeviceFleetResponsePrivate(DescribeDeviceFleetResponse * const q);

    void parseDescribeDeviceFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceFleetResponse)
    Q_DISABLE_COPY(DescribeDeviceFleetResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
