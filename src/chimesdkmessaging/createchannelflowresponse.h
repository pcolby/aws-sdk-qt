// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELFLOWRESPONSE_H
#define QTAWS_CREATECHANNELFLOWRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "createchannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelFlowResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT CreateChannelFlowResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    CreateChannelFlowResponse(const CreateChannelFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChannelFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelFlowResponse)
    Q_DISABLE_COPY(CreateChannelFlowResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
