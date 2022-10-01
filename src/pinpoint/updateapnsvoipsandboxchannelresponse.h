// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELRESPONSE_H
#define QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updateapnsvoipsandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsVoipSandboxChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateApnsVoipSandboxChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateApnsVoipSandboxChannelResponse(const UpdateApnsVoipSandboxChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApnsVoipSandboxChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApnsVoipSandboxChannelResponse)
    Q_DISABLE_COPY(UpdateApnsVoipSandboxChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
