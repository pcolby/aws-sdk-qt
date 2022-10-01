// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGROUPSREQUEST_P_H
#define QTAWS_DESCRIBELOGGROUPSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describeloggroupsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogGroupsRequest;

class DescribeLogGroupsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeLogGroupsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeLogGroupsRequest * const q);
    DescribeLogGroupsRequestPrivate(const DescribeLogGroupsRequestPrivate &other,
                                   DescribeLogGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLogGroupsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
