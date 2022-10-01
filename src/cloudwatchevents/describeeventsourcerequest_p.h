// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCEREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSOURCEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "describeeventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeEventSourceRequest;

class DescribeEventSourceRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DescribeEventSourceRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DescribeEventSourceRequest * const q);
    DescribeEventSourceRequestPrivate(const DescribeEventSourceRequestPrivate &other,
                                   DescribeEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
