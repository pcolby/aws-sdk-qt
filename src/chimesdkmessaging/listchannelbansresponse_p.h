// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELBANSRESPONSE_P_H
#define QTAWS_LISTCHANNELBANSRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelBansResponse;

class ListChannelBansResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelBansResponsePrivate(ListChannelBansResponse * const q);

    void parseListChannelBansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelBansResponse)
    Q_DISABLE_COPY(ListChannelBansResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
