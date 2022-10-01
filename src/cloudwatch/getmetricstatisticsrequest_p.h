// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTATISTICSREQUEST_P_H
#define QTAWS_GETMETRICSTATISTICSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "getmetricstatisticsrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStatisticsRequest;

class GetMetricStatisticsRequestPrivate : public CloudWatchRequestPrivate {

public:
    GetMetricStatisticsRequestPrivate(const CloudWatchRequest::Action action,
                                   GetMetricStatisticsRequest * const q);
    GetMetricStatisticsRequestPrivate(const GetMetricStatisticsRequestPrivate &other,
                                   GetMetricStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMetricStatisticsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
