// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGEREQUEST_P_H
#define QTAWS_GETCHANNELMESSAGEREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "getchannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMessageRequest;

class GetChannelMessageRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    GetChannelMessageRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   GetChannelMessageRequest * const q);
    GetChannelMessageRequestPrivate(const GetChannelMessageRequestPrivate &other,
                                   GetChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
