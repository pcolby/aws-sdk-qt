// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWRESPONSE_P_H
#define QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsAssociatedWithChannelFlowResponse;

class ListChannelsAssociatedWithChannelFlowResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelsAssociatedWithChannelFlowResponsePrivate(ListChannelsAssociatedWithChannelFlowResponse * const q);

    void parseListChannelsAssociatedWithChannelFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelsAssociatedWithChannelFlowResponse)
    Q_DISABLE_COPY(ListChannelsAssociatedWithChannelFlowResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
