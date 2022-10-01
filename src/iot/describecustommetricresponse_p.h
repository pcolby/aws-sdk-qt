// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMMETRICRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMMETRICRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeCustomMetricResponse;

class DescribeCustomMetricResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeCustomMetricResponsePrivate(DescribeCustomMetricResponse * const q);

    void parseDescribeCustomMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomMetricResponse)
    Q_DISABLE_COPY(DescribeCustomMetricResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
