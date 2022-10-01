// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWREQUEST_P_H
#define QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelsassociatedwithchannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsAssociatedWithChannelFlowRequest;

class ListChannelsAssociatedWithChannelFlowRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelsAssociatedWithChannelFlowRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelsAssociatedWithChannelFlowRequest * const q);
    ListChannelsAssociatedWithChannelFlowRequestPrivate(const ListChannelsAssociatedWithChannelFlowRequestPrivate &other,
                                   ListChannelsAssociatedWithChannelFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelsAssociatedWithChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
