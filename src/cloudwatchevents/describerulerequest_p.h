// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEREQUEST_P_H
#define QTAWS_DESCRIBERULEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "describerulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeRuleRequest;

class DescribeRuleRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DescribeRuleRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DescribeRuleRequest * const q);
    DescribeRuleRequestPrivate(const DescribeRuleRequestPrivate &other,
                                   DescribeRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRuleRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
