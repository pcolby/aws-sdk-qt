// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELFLOWRESPONSE_H
#define QTAWS_UPDATECHANNELFLOWRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "updatechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelFlowResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT UpdateChannelFlowResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    UpdateChannelFlowResponse(const UpdateChannelFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChannelFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelFlowResponse)
    Q_DISABLE_COPY(UpdateChannelFlowResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
