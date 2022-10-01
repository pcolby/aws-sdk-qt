// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELFLOWSRESPONSE_P_H
#define QTAWS_LISTCHANNELFLOWSRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelFlowsResponse;

class ListChannelFlowsResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelFlowsResponsePrivate(ListChannelFlowsResponse * const q);

    void parseListChannelFlowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelFlowsResponse)
    Q_DISABLE_COPY(ListChannelFlowsResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
