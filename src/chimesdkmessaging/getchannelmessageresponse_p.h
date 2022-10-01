// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGERESPONSE_P_H
#define QTAWS_GETCHANNELMESSAGERESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMessageResponse;

class GetChannelMessageResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit GetChannelMessageResponsePrivate(GetChannelMessageResponse * const q);

    void parseGetChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelMessageResponse)
    Q_DISABLE_COPY(GetChannelMessageResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
