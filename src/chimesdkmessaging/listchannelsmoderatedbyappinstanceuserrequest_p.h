// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelsmoderatedbyappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsModeratedByAppInstanceUserRequest;

class ListChannelsModeratedByAppInstanceUserRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelsModeratedByAppInstanceUserRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelsModeratedByAppInstanceUserRequest * const q);
    ListChannelsModeratedByAppInstanceUserRequestPrivate(const ListChannelsModeratedByAppInstanceUserRequestPrivate &other,
                                   ListChannelsModeratedByAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelsModeratedByAppInstanceUserRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
