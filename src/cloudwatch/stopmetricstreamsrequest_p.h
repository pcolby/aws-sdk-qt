// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMETRICSTREAMSREQUEST_P_H
#define QTAWS_STOPMETRICSTREAMSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "stopmetricstreamsrequest.h"

namespace QtAws {
namespace CloudWatch {

class StopMetricStreamsRequest;

class StopMetricStreamsRequestPrivate : public CloudWatchRequestPrivate {

public:
    StopMetricStreamsRequestPrivate(const CloudWatchRequest::Action action,
                                   StopMetricStreamsRequest * const q);
    StopMetricStreamsRequestPrivate(const StopMetricStreamsRequestPrivate &other,
                                   StopMetricStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopMetricStreamsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
