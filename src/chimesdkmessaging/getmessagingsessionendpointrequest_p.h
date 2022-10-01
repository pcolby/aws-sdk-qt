// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMESSAGINGSESSIONENDPOINTREQUEST_P_H
#define QTAWS_GETMESSAGINGSESSIONENDPOINTREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "getmessagingsessionendpointrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetMessagingSessionEndpointRequest;

class GetMessagingSessionEndpointRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    GetMessagingSessionEndpointRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   GetMessagingSessionEndpointRequest * const q);
    GetMessagingSessionEndpointRequestPrivate(const GetMessagingSessionEndpointRequestPrivate &other,
                                   GetMessagingSessionEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMessagingSessionEndpointRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
