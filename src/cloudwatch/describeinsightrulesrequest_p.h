// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSIGHTRULESREQUEST_P_H
#define QTAWS_DESCRIBEINSIGHTRULESREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "describeinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeInsightRulesRequest;

class DescribeInsightRulesRequestPrivate : public CloudWatchRequestPrivate {

public:
    DescribeInsightRulesRequestPrivate(const CloudWatchRequest::Action action,
                                   DescribeInsightRulesRequest * const q);
    DescribeInsightRulesRequestPrivate(const DescribeInsightRulesRequestPrivate &other,
                                   DescribeInsightRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
