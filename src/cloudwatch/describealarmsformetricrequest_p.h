// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSFORMETRICREQUEST_P_H
#define QTAWS_DESCRIBEALARMSFORMETRICREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "describealarmsformetricrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsForMetricRequest;

class DescribeAlarmsForMetricRequestPrivate : public CloudWatchRequestPrivate {

public:
    DescribeAlarmsForMetricRequestPrivate(const CloudWatchRequest::Action action,
                                   DescribeAlarmsForMetricRequest * const q);
    DescribeAlarmsForMetricRequestPrivate(const DescribeAlarmsForMetricRequestPrivate &other,
                                   DescribeAlarmsForMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmsForMetricRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
