// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICFILTERSREQUEST_P_H
#define QTAWS_DESCRIBEMETRICFILTERSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describemetricfiltersrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeMetricFiltersRequest;

class DescribeMetricFiltersRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeMetricFiltersRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeMetricFiltersRequest * const q);
    DescribeMetricFiltersRequestPrivate(const DescribeMetricFiltersRequestPrivate &other,
                                   DescribeMetricFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMetricFiltersRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
