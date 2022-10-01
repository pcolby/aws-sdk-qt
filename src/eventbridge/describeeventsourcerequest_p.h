// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCEREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSOURCEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "describeeventsourcerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeEventSourceRequest;

class DescribeEventSourceRequestPrivate : public EventBridgeRequestPrivate {

public:
    DescribeEventSourceRequestPrivate(const EventBridgeRequest::Action action,
                                   DescribeEventSourceRequest * const q);
    DescribeEventSourceRequestPrivate(const DescribeEventSourceRequestPrivate &other,
                                   DescribeEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventSourceRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
