// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelmembershipsforappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMembershipsForAppInstanceUserRequest;

class ListChannelMembershipsForAppInstanceUserRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelMembershipsForAppInstanceUserRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelMembershipsForAppInstanceUserRequest * const q);
    ListChannelMembershipsForAppInstanceUserRequestPrivate(const ListChannelMembershipsForAppInstanceUserRequestPrivate &other,
                                   ListChannelMembershipsForAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelMembershipsForAppInstanceUserRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
