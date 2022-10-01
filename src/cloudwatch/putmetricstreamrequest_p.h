// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICSTREAMREQUEST_P_H
#define QTAWS_PUTMETRICSTREAMREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putmetricstreamrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricStreamRequest;

class PutMetricStreamRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutMetricStreamRequestPrivate(const CloudWatchRequest::Action action,
                                   PutMetricStreamRequest * const q);
    PutMetricStreamRequestPrivate(const PutMetricStreamRequestPrivate &other,
                                   PutMetricStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMetricStreamRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
