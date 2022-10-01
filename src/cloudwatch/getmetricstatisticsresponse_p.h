// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTATISTICSRESPONSE_P_H
#define QTAWS_GETMETRICSTATISTICSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStatisticsResponse;

class GetMetricStatisticsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit GetMetricStatisticsResponsePrivate(GetMetricStatisticsResponse * const q);

    void parseGetMetricStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMetricStatisticsResponse)
    Q_DISABLE_COPY(GetMetricStatisticsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
