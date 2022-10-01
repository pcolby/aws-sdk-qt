// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICDATAREQUEST_P_H
#define QTAWS_PUTMETRICDATAREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putmetricdatarequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricDataRequest;

class PutMetricDataRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutMetricDataRequestPrivate(const CloudWatchRequest::Action action,
                                   PutMetricDataRequest * const q);
    PutMetricDataRequestPrivate(const PutMetricDataRequestPrivate &other,
                                   PutMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMetricDataRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
