// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBCHANNELSREQUEST_P_H
#define QTAWS_LISTSUBCHANNELSREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listsubchannelsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListSubChannelsRequest;

class ListSubChannelsRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListSubChannelsRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListSubChannelsRequest * const q);
    ListSubChannelsRequestPrivate(const ListSubChannelsRequestPrivate &other,
                                   ListSubChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubChannelsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
