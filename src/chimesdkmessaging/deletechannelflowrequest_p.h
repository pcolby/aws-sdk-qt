// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELFLOWREQUEST_P_H
#define QTAWS_DELETECHANNELFLOWREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "deletechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelFlowRequest;

class DeleteChannelFlowRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DeleteChannelFlowRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DeleteChannelFlowRequest * const q);
    DeleteChannelFlowRequestPrivate(const DeleteChannelFlowRequestPrivate &other,
                                   DeleteChannelFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
