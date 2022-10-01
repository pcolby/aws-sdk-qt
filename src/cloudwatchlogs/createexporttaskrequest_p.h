// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTTASKREQUEST_P_H
#define QTAWS_CREATEEXPORTTASKREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "createexporttaskrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateExportTaskRequest;

class CreateExportTaskRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    CreateExportTaskRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   CreateExportTaskRequest * const q);
    CreateExportTaskRequestPrivate(const CreateExportTaskRequestPrivate &other,
                                   CreateExportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExportTaskRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
