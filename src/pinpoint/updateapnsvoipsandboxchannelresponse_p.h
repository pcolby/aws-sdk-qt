// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELRESPONSE_P_H
#define QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsVoipSandboxChannelResponse;

class UpdateApnsVoipSandboxChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateApnsVoipSandboxChannelResponsePrivate(UpdateApnsVoipSandboxChannelResponse * const q);

    void parseUpdateApnsVoipSandboxChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApnsVoipSandboxChannelResponse)
    Q_DISABLE_COPY(UpdateApnsVoipSandboxChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
