// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLAYREQUEST_P_H
#define QTAWS_DESCRIBEREPLAYREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "describereplayrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeReplayRequest;

class DescribeReplayRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DescribeReplayRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DescribeReplayRequest * const q);
    DescribeReplayRequestPrivate(const DescribeReplayRequestPrivate &other,
                                   DescribeReplayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplayRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
