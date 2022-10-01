// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGRECORDREQUEST_P_H
#define QTAWS_GETLOGRECORDREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "getlogrecordrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogRecordRequest;

class GetLogRecordRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    GetLogRecordRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   GetLogRecordRequest * const q);
    GetLogRecordRequestPrivate(const GetLogRecordRequestPrivate &other,
                                   GetLogRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLogRecordRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
