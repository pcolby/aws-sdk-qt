// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBCHANNELSRESPONSE_P_H
#define QTAWS_LISTSUBCHANNELSRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListSubChannelsResponse;

class ListSubChannelsResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListSubChannelsResponsePrivate(ListSubChannelsResponse * const q);

    void parseListSubChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubChannelsResponse)
    Q_DISABLE_COPY(ListSubChannelsResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
