// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELBANSREQUEST_P_H
#define QTAWS_LISTCHANNELBANSREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelbansrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelBansRequest;

class ListChannelBansRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelBansRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelBansRequest * const q);
    ListChannelBansRequestPrivate(const ListChannelBansRequestPrivate &other,
                                   ListChannelBansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelBansRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
