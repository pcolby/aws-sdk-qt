// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTBUSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTBUSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "describeeventbusrequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeEventBusRequest;

class DescribeEventBusRequestPrivate : public EventBridgeRequestPrivate {

public:
    DescribeEventBusRequestPrivate(const EventBridgeRequest::Action action,
                                   DescribeEventBusRequest * const q);
    DescribeEventBusRequestPrivate(const DescribeEventBusRequestPrivate &other,
                                   DescribeEventBusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventBusRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
