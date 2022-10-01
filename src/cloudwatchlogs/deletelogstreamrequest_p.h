// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGSTREAMREQUEST_P_H
#define QTAWS_DELETELOGSTREAMREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "deletelogstreamrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogStreamRequest;

class DeleteLogStreamRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DeleteLogStreamRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DeleteLogStreamRequest * const q);
    DeleteLogStreamRequestPrivate(const DeleteLogStreamRequestPrivate &other,
                                   DeleteLogStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLogStreamRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
