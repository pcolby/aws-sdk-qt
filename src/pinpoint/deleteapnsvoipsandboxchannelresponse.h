// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSVOIPSANDBOXCHANNELRESPONSE_H
#define QTAWS_DELETEAPNSVOIPSANDBOXCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteapnsvoipsandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsVoipSandboxChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteApnsVoipSandboxChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteApnsVoipSandboxChannelResponse(const DeleteApnsVoipSandboxChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApnsVoipSandboxChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApnsVoipSandboxChannelResponse)
    Q_DISABLE_COPY(DeleteApnsVoipSandboxChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
