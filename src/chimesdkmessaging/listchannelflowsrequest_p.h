// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELFLOWSREQUEST_P_H
#define QTAWS_LISTCHANNELFLOWSREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelflowsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelFlowsRequest;

class ListChannelFlowsRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelFlowsRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelFlowsRequest * const q);
    ListChannelFlowsRequestPrivate(const ListChannelFlowsRequestPrivate &other,
                                   ListChannelFlowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelFlowsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
