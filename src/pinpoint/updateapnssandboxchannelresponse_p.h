// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSSANDBOXCHANNELRESPONSE_P_H
#define QTAWS_UPDATEAPNSSANDBOXCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsSandboxChannelResponse;

class UpdateApnsSandboxChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateApnsSandboxChannelResponsePrivate(UpdateApnsSandboxChannelResponse * const q);

    void parseUpdateApnsSandboxChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApnsSandboxChannelResponse)
    Q_DISABLE_COPY(UpdateApnsSandboxChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
