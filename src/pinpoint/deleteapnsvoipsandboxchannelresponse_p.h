// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSVOIPSANDBOXCHANNELRESPONSE_P_H
#define QTAWS_DELETEAPNSVOIPSANDBOXCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsVoipSandboxChannelResponse;

class DeleteApnsVoipSandboxChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteApnsVoipSandboxChannelResponsePrivate(DeleteApnsVoipSandboxChannelResponse * const q);

    void parseDeleteApnsVoipSandboxChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApnsVoipSandboxChannelResponse)
    Q_DISABLE_COPY(DeleteApnsVoipSandboxChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
