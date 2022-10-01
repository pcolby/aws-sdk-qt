// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECHANNELFLOWRESPONSE_P_H
#define QTAWS_DISASSOCIATECHANNELFLOWRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DisassociateChannelFlowResponse;

class DisassociateChannelFlowResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DisassociateChannelFlowResponsePrivate(DisassociateChannelFlowResponse * const q);

    void parseDisassociateChannelFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateChannelFlowResponse)
    Q_DISABLE_COPY(DisassociateChannelFlowResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
