// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICIESREQUEST_P_H
#define QTAWS_DESCRIBERESOURCEPOLICIESREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describeresourcepoliciesrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeResourcePoliciesRequest;

class DescribeResourcePoliciesRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeResourcePoliciesRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeResourcePoliciesRequest * const q);
    DescribeResourcePoliciesRequestPrivate(const DescribeResourcePoliciesRequestPrivate &other,
                                   DescribeResourcePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePoliciesRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
