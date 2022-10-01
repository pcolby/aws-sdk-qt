// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYREQUEST_P_H
#define QTAWS_STOPQUERYREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "stopqueryrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class StopQueryRequest;

class StopQueryRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    StopQueryRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   StopQueryRequest * const q);
    StopQueryRequestPrivate(const StopQueryRequestPrivate &other,
                                   StopQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopQueryRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
