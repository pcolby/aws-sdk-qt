// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "describeconnectionrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeConnectionRequest;

class DescribeConnectionRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DescribeConnectionRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DescribeConnectionRequest * const q);
    DescribeConnectionRequestPrivate(const DescribeConnectionRequestPrivate &other,
                                   DescribeConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
