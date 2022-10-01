// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMETRICSTREAMSREQUEST_P_H
#define QTAWS_STARTMETRICSTREAMSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "startmetricstreamsrequest.h"

namespace QtAws {
namespace CloudWatch {

class StartMetricStreamsRequest;

class StartMetricStreamsRequestPrivate : public CloudWatchRequestPrivate {

public:
    StartMetricStreamsRequestPrivate(const CloudWatchRequest::Action action,
                                   StartMetricStreamsRequest * const q);
    StartMetricStreamsRequestPrivate(const StartMetricStreamsRequestPrivate &other,
                                   StartMetricStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMetricStreamsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
