// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELBANRESPONSE_P_H
#define QTAWS_DELETECHANNELBANRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelBanResponse;

class DeleteChannelBanResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DeleteChannelBanResponsePrivate(DeleteChannelBanResponse * const q);

    void parseDeleteChannelBanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelBanResponse)
    Q_DISABLE_COPY(DeleteChannelBanResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
