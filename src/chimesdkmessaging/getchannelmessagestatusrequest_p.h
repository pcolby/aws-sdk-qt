// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGESTATUSREQUEST_P_H
#define QTAWS_GETCHANNELMESSAGESTATUSREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "getchannelmessagestatusrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMessageStatusRequest;

class GetChannelMessageStatusRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    GetChannelMessageStatusRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   GetChannelMessageStatusRequest * const q);
    GetChannelMessageStatusRequestPrivate(const GetChannelMessageStatusRequestPrivate &other,
                                   GetChannelMessageStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelMessageStatusRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
