// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELFLOWRESPONSE_P_H
#define QTAWS_UPDATECHANNELFLOWRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelFlowResponse;

class UpdateChannelFlowResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit UpdateChannelFlowResponsePrivate(UpdateChannelFlowResponse * const q);

    void parseUpdateChannelFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChannelFlowResponse)
    Q_DISABLE_COPY(UpdateChannelFlowResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
