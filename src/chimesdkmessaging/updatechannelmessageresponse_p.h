// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELMESSAGERESPONSE_P_H
#define QTAWS_UPDATECHANNELMESSAGERESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelMessageResponse;

class UpdateChannelMessageResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit UpdateChannelMessageResponsePrivate(UpdateChannelMessageResponse * const q);

    void parseUpdateChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChannelMessageResponse)
    Q_DISABLE_COPY(UpdateChannelMessageResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
