// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANNELFLOWCALLBACKREQUEST_P_H
#define QTAWS_CHANNELFLOWCALLBACKREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "channelflowcallbackrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ChannelFlowCallbackRequest;

class ChannelFlowCallbackRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ChannelFlowCallbackRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ChannelFlowCallbackRequest * const q);
    ChannelFlowCallbackRequestPrivate(const ChannelFlowCallbackRequestPrivate &other,
                                   ChannelFlowCallbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChannelFlowCallbackRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
