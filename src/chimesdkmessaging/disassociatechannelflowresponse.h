// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECHANNELFLOWRESPONSE_H
#define QTAWS_DISASSOCIATECHANNELFLOWRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "disassociatechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DisassociateChannelFlowResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DisassociateChannelFlowResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DisassociateChannelFlowResponse(const DisassociateChannelFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateChannelFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateChannelFlowResponse)
    Q_DISABLE_COPY(DisassociateChannelFlowResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
