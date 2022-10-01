// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGROUPREQUEST_P_H
#define QTAWS_DELETELOGGROUPREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "deleteloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogGroupRequest;

class DeleteLogGroupRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DeleteLogGroupRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DeleteLogGroupRequest * const q);
    DeleteLogGroupRequestPrivate(const DeleteLogGroupRequestPrivate &other,
                                   DeleteLogGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
