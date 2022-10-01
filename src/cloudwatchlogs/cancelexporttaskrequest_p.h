// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELEXPORTTASKREQUEST_P_H
#define QTAWS_CANCELEXPORTTASKREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "cancelexporttaskrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CancelExportTaskRequest;

class CancelExportTaskRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    CancelExportTaskRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   CancelExportTaskRequest * const q);
    CancelExportTaskRequestPrivate(const CancelExportTaskRequestPrivate &other,
                                   CancelExportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelExportTaskRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
