// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPIDESTINATIONREQUEST_P_H
#define QTAWS_DESCRIBEAPIDESTINATIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "describeapidestinationrequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeApiDestinationRequest;

class DescribeApiDestinationRequestPrivate : public EventBridgeRequestPrivate {

public:
    DescribeApiDestinationRequestPrivate(const EventBridgeRequest::Action action,
                                   DescribeApiDestinationRequest * const q);
    DescribeApiDestinationRequestPrivate(const DescribeApiDestinationRequestPrivate &other,
                                   DescribeApiDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApiDestinationRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
