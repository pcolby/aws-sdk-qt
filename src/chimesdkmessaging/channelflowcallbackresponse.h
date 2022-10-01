// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANNELFLOWCALLBACKRESPONSE_H
#define QTAWS_CHANNELFLOWCALLBACKRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "channelflowcallbackrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ChannelFlowCallbackResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ChannelFlowCallbackResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    ChannelFlowCallbackResponse(const ChannelFlowCallbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ChannelFlowCallbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChannelFlowCallbackResponse)
    Q_DISABLE_COPY(ChannelFlowCallbackResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
