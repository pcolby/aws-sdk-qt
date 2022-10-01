// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSVOIPSANDBOXCHANNELRESPONSE_P_H
#define QTAWS_GETAPNSVOIPSANDBOXCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsVoipSandboxChannelResponse;

class GetApnsVoipSandboxChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetApnsVoipSandboxChannelResponsePrivate(GetApnsVoipSandboxChannelResponse * const q);

    void parseGetApnsVoipSandboxChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApnsVoipSandboxChannelResponse)
    Q_DISABLE_COPY(GetApnsVoipSandboxChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
