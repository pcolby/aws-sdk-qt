// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYREQUEST_P_H
#define QTAWS_STARTQUERYREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "startqueryrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class StartQueryRequest;

class StartQueryRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    StartQueryRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   StartQueryRequest * const q);
    StartQueryRequestPrivate(const StartQueryRequestPrivate &other,
                                   StartQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartQueryRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
