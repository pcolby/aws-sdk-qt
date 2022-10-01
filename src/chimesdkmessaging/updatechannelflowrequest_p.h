// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELFLOWREQUEST_P_H
#define QTAWS_UPDATECHANNELFLOWREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "updatechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelFlowRequest;

class UpdateChannelFlowRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    UpdateChannelFlowRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   UpdateChannelFlowRequest * const q);
    UpdateChannelFlowRequestPrivate(const UpdateChannelFlowRequestPrivate &other,
                                   UpdateChannelFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
