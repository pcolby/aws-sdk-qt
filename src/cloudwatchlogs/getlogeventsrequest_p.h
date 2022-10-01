// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGEVENTSREQUEST_P_H
#define QTAWS_GETLOGEVENTSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "getlogeventsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogEventsRequest;

class GetLogEventsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    GetLogEventsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   GetLogEventsRequest * const q);
    GetLogEventsRequestPrivate(const GetLogEventsRequestPrivate &other,
                                   GetLogEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLogEventsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
