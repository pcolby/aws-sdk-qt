// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSSANDBOXCHANNELRESPONSE_P_H
#define QTAWS_GETAPNSSANDBOXCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsSandboxChannelResponse;

class GetApnsSandboxChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetApnsSandboxChannelResponsePrivate(GetApnsSandboxChannelResponse * const q);

    void parseGetApnsSandboxChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApnsSandboxChannelResponse)
    Q_DISABLE_COPY(GetApnsSandboxChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
