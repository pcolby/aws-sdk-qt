// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETMETRICRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeFleetMetricResponse;

class DescribeFleetMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeFleetMetricResponsePrivate(DescribeFleetMetricResponse * const q);

    void parseDescribeFleetMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetMetricResponse)
    Q_DISABLE_COPY(DescribeFleetMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
