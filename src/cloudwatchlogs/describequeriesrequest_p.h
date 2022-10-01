// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERIESREQUEST_P_H
#define QTAWS_DESCRIBEQUERIESREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describequeriesrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueriesRequest;

class DescribeQueriesRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeQueriesRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeQueriesRequest * const q);
    DescribeQueriesRequestPrivate(const DescribeQueriesRequestPrivate &other,
                                   DescribeQueriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeQueriesRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
