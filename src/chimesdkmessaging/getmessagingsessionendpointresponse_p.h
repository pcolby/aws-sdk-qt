// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMESSAGINGSESSIONENDPOINTRESPONSE_P_H
#define QTAWS_GETMESSAGINGSESSIONENDPOINTRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetMessagingSessionEndpointResponse;

class GetMessagingSessionEndpointResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit GetMessagingSessionEndpointResponsePrivate(GetMessagingSessionEndpointResponse * const q);

    void parseGetMessagingSessionEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMessagingSessionEndpointResponse)
    Q_DISABLE_COPY(GetMessagingSessionEndpointResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
