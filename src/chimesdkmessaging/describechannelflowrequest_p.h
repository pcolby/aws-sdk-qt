// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELFLOWREQUEST_P_H
#define QTAWS_DESCRIBECHANNELFLOWREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "describechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelFlowRequest;

class DescribeChannelFlowRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DescribeChannelFlowRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DescribeChannelFlowRequest * const q);
    DescribeChannelFlowRequestPrivate(const DescribeChannelFlowRequestPrivate &other,
                                   DescribeChannelFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
