// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGSTREAMSREQUEST_P_H
#define QTAWS_DESCRIBELOGSTREAMSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describelogstreamsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogStreamsRequest;

class DescribeLogStreamsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeLogStreamsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeLogStreamsRequest * const q);
    DescribeLogStreamsRequestPrivate(const DescribeLogStreamsRequestPrivate &other,
                                   DescribeLogStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLogStreamsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
