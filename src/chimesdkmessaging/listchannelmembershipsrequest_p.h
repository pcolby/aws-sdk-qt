// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSREQUEST_P_H
#define QTAWS_LISTCHANNELMEMBERSHIPSREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelmembershipsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMembershipsRequest;

class ListChannelMembershipsRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelMembershipsRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelMembershipsRequest * const q);
    ListChannelMembershipsRequestPrivate(const ListChannelMembershipsRequestPrivate &other,
                                   ListChannelMembershipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelMembershipsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
