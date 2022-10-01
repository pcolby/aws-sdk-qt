// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONFILTERSREQUEST_P_H
#define QTAWS_DESCRIBESUBSCRIPTIONFILTERSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describesubscriptionfiltersrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeSubscriptionFiltersRequest;

class DescribeSubscriptionFiltersRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeSubscriptionFiltersRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeSubscriptionFiltersRequest * const q);
    DescribeSubscriptionFiltersRequestPrivate(const DescribeSubscriptionFiltersRequestPrivate &other,
                                   DescribeSubscriptionFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubscriptionFiltersRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
