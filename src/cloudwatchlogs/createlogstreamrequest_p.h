// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSTREAMREQUEST_P_H
#define QTAWS_CREATELOGSTREAMREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "createlogstreamrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogStreamRequest;

class CreateLogStreamRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    CreateLogStreamRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   CreateLogStreamRequest * const q);
    CreateLogStreamRequestPrivate(const CreateLogStreamRequestPrivate &other,
                                   CreateLogStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLogStreamRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
