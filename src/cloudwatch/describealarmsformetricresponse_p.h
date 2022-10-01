// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSFORMETRICRESPONSE_P_H
#define QTAWS_DESCRIBEALARMSFORMETRICRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsForMetricResponse;

class DescribeAlarmsForMetricResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DescribeAlarmsForMetricResponsePrivate(DescribeAlarmsForMetricResponse * const q);

    void parseDescribeAlarmsForMetricResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmsForMetricResponse)
    Q_DISABLE_COPY(DescribeAlarmsForMetricResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
