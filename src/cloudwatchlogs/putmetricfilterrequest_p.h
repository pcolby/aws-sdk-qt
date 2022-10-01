// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICFILTERREQUEST_P_H
#define QTAWS_PUTMETRICFILTERREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "putmetricfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutMetricFilterRequest;

class PutMetricFilterRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    PutMetricFilterRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   PutMetricFilterRequest * const q);
    PutMetricFilterRequestPrivate(const PutMetricFilterRequestPrivate &other,
                                   PutMetricFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMetricFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
