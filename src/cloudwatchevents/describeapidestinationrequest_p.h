// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPIDESTINATIONREQUEST_P_H
#define QTAWS_DESCRIBEAPIDESTINATIONREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "describeapidestinationrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeApiDestinationRequest;

class DescribeApiDestinationRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DescribeApiDestinationRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DescribeApiDestinationRequest * const q);
    DescribeApiDestinationRequestPrivate(const DescribeApiDestinationRequestPrivate &other,
                                   DescribeApiDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApiDestinationRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
