// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECHANNELFLOWRESPONSE_P_H
#define QTAWS_ASSOCIATECHANNELFLOWRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class AssociateChannelFlowResponse;

class AssociateChannelFlowResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit AssociateChannelFlowResponsePrivate(AssociateChannelFlowResponse * const q);

    void parseAssociateChannelFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateChannelFlowResponse)
    Q_DISABLE_COPY(AssociateChannelFlowResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
