// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMESSAGESREQUEST_P_H
#define QTAWS_LISTCHANNELMESSAGESREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelmessagesrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMessagesRequest;

class ListChannelMessagesRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelMessagesRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelMessagesRequest * const q);
    ListChannelMessagesRequestPrivate(const ListChannelMessagesRequestPrivate &other,
                                   ListChannelMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelMessagesRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
