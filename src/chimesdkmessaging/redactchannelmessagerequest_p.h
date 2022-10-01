// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCHANNELMESSAGEREQUEST_P_H
#define QTAWS_REDACTCHANNELMESSAGEREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "redactchannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class RedactChannelMessageRequest;

class RedactChannelMessageRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    RedactChannelMessageRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   RedactChannelMessageRequest * const q);
    RedactChannelMessageRequestPrivate(const RedactChannelMessageRequestPrivate &other,
                                   RedactChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(RedactChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
