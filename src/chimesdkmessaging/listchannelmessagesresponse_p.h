// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMESSAGESRESPONSE_P_H
#define QTAWS_LISTCHANNELMESSAGESRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMessagesResponse;

class ListChannelMessagesResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelMessagesResponsePrivate(ListChannelMessagesResponse * const q);

    void parseListChannelMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelMessagesResponse)
    Q_DISABLE_COPY(ListChannelMessagesResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
