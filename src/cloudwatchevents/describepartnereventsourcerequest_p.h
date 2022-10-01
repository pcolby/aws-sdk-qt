// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_P_H
#define QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "describepartnereventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribePartnerEventSourceRequest;

class DescribePartnerEventSourceRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DescribePartnerEventSourceRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DescribePartnerEventSourceRequest * const q);
    DescribePartnerEventSourceRequestPrivate(const DescribePartnerEventSourceRequestPrivate &other,
                                   DescribePartnerEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePartnerEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
