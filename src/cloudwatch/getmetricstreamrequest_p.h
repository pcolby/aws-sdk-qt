// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTREAMREQUEST_P_H
#define QTAWS_GETMETRICSTREAMREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "getmetricstreamrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStreamRequest;

class GetMetricStreamRequestPrivate : public CloudWatchRequestPrivate {

public:
    GetMetricStreamRequestPrivate(const CloudWatchRequest::Action action,
                                   GetMetricStreamRequest * const q);
    GetMetricStreamRequestPrivate(const GetMetricStreamRequestPrivate &other,
                                   GetMetricStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMetricStreamRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
