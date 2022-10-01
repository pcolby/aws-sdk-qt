// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELFLOWREQUEST_P_H
#define QTAWS_CREATECHANNELFLOWREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "createchannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelFlowRequest;

class CreateChannelFlowRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    CreateChannelFlowRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   CreateChannelFlowRequest * const q);
    CreateChannelFlowRequestPrivate(const CreateChannelFlowRequestPrivate &other,
                                   CreateChannelFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
