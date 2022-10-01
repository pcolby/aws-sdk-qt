// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMHISTORYREQUEST_P_H
#define QTAWS_DESCRIBEALARMHISTORYREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "describealarmhistoryrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmHistoryRequest;

class DescribeAlarmHistoryRequestPrivate : public CloudWatchRequestPrivate {

public:
    DescribeAlarmHistoryRequestPrivate(const CloudWatchRequest::Action action,
                                   DescribeAlarmHistoryRequest * const q);
    DescribeAlarmHistoryRequestPrivate(const DescribeAlarmHistoryRequestPrivate &other,
                                   DescribeAlarmHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmHistoryRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
