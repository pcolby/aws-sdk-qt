// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMODERATORSRESPONSE_P_H
#define QTAWS_LISTCHANNELMODERATORSRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelModeratorsResponse;

class ListChannelModeratorsResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelModeratorsResponsePrivate(ListChannelModeratorsResponse * const q);

    void parseListChannelModeratorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelModeratorsResponse)
    Q_DISABLE_COPY(ListChannelModeratorsResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
