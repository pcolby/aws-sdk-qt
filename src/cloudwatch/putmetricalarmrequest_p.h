// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICALARMREQUEST_P_H
#define QTAWS_PUTMETRICALARMREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putmetricalarmrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricAlarmRequest;

class PutMetricAlarmRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutMetricAlarmRequestPrivate(const CloudWatchRequest::Action action,
                                   PutMetricAlarmRequest * const q);
    PutMetricAlarmRequestPrivate(const PutMetricAlarmRequestPrivate &other,
                                   PutMetricAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMetricAlarmRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
