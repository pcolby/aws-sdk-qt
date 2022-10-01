// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANNELFLOWCALLBACKRESPONSE_P_H
#define QTAWS_CHANNELFLOWCALLBACKRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ChannelFlowCallbackResponse;

class ChannelFlowCallbackResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ChannelFlowCallbackResponsePrivate(ChannelFlowCallbackResponse * const q);

    void parseChannelFlowCallbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChannelFlowCallbackResponse)
    Q_DISABLE_COPY(ChannelFlowCallbackResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
