// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELBANRESPONSE_P_H
#define QTAWS_CREATECHANNELBANRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelBanResponse;

class CreateChannelBanResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit CreateChannelBanResponsePrivate(CreateChannelBanResponse * const q);

    void parseCreateChannelBanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChannelBanResponse)
    Q_DISABLE_COPY(CreateChannelBanResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
