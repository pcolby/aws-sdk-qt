// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGEVENTSREQUEST_P_H
#define QTAWS_PUTLOGEVENTSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "putlogeventsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutLogEventsRequest;

class PutLogEventsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    PutLogEventsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   PutLogEventsRequest * const q);
    PutLogEventsRequestPrivate(const PutLogEventsRequestPrivate &other,
                                   PutLogEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLogEventsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
