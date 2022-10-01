// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCHANNELMESSAGERESPONSE_P_H
#define QTAWS_SENDCHANNELMESSAGERESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class SendChannelMessageResponse;

class SendChannelMessageResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit SendChannelMessageResponsePrivate(SendChannelMessageResponse * const q);

    void parseSendChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendChannelMessageResponse)
    Q_DISABLE_COPY(SendChannelMessageResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
