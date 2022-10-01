// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCHANNELMESSAGEREQUEST_P_H
#define QTAWS_SENDCHANNELMESSAGEREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "sendchannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class SendChannelMessageRequest;

class SendChannelMessageRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    SendChannelMessageRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   SendChannelMessageRequest * const q);
    SendChannelMessageRequestPrivate(const SendChannelMessageRequestPrivate &other,
                                   SendChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
