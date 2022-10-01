// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELFLOWRESPONSE_P_H
#define QTAWS_CREATECHANNELFLOWRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelFlowResponse;

class CreateChannelFlowResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit CreateChannelFlowResponsePrivate(CreateChannelFlowResponse * const q);

    void parseCreateChannelFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChannelFlowResponse)
    Q_DISABLE_COPY(CreateChannelFlowResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
