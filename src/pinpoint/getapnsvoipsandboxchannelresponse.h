// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSVOIPSANDBOXCHANNELRESPONSE_H
#define QTAWS_GETAPNSVOIPSANDBOXCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getapnsvoipsandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsVoipSandboxChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetApnsVoipSandboxChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetApnsVoipSandboxChannelResponse(const GetApnsVoipSandboxChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApnsVoipSandboxChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApnsVoipSandboxChannelResponse)
    Q_DISABLE_COPY(GetApnsVoipSandboxChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
