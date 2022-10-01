// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDESTINATIONSREQUEST_P_H
#define QTAWS_DESCRIBEDESTINATIONSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describedestinationsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeDestinationsRequest;

class DescribeDestinationsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeDestinationsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeDestinationsRequest * const q);
    DescribeDestinationsRequestPrivate(const DescribeDestinationsRequestPrivate &other,
                                   DescribeDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDestinationsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
