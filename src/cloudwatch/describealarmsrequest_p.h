// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSREQUEST_P_H
#define QTAWS_DESCRIBEALARMSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "describealarmsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsRequest;

class DescribeAlarmsRequestPrivate : public CloudWatchRequestPrivate {

public:
    DescribeAlarmsRequestPrivate(const CloudWatchRequest::Action action,
                                   DescribeAlarmsRequest * const q);
    DescribeAlarmsRequestPrivate(const DescribeAlarmsRequestPrivate &other,
                                   DescribeAlarmsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
