// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREADMARKERRESPONSE_P_H
#define QTAWS_UPDATECHANNELREADMARKERRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelReadMarkerResponse;

class UpdateChannelReadMarkerResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit UpdateChannelReadMarkerResponsePrivate(UpdateChannelReadMarkerResponse * const q);

    void parseUpdateChannelReadMarkerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChannelReadMarkerResponse)
    Q_DISABLE_COPY(UpdateChannelReadMarkerResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
