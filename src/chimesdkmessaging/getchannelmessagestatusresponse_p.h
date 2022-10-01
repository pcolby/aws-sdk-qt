// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGESTATUSRESPONSE_P_H
#define QTAWS_GETCHANNELMESSAGESTATUSRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMessageStatusResponse;

class GetChannelMessageStatusResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit GetChannelMessageStatusResponsePrivate(GetChannelMessageStatusResponse * const q);

    void parseGetChannelMessageStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelMessageStatusResponse)
    Q_DISABLE_COPY(GetChannelMessageStatusResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
