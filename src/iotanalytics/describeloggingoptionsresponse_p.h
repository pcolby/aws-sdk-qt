// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGOPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBELOGGINGOPTIONSRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeLoggingOptionsResponse;

class DescribeLoggingOptionsResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit DescribeLoggingOptionsResponsePrivate(DescribeLoggingOptionsResponse * const q);

    void parseDescribeLoggingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingOptionsResponse)
    Q_DISABLE_COPY(DescribeLoggingOptionsResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
