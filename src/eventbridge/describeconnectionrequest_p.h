// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "describeconnectionrequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeConnectionRequest;

class DescribeConnectionRequestPrivate : public EventBridgeRequestPrivate {

public:
    DescribeConnectionRequestPrivate(const EventBridgeRequest::Action action,
                                   DescribeConnectionRequest * const q);
    DescribeConnectionRequestPrivate(const DescribeConnectionRequestPrivate &other,
                                   DescribeConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
