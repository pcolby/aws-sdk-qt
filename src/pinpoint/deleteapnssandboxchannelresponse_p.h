// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSSANDBOXCHANNELRESPONSE_P_H
#define QTAWS_DELETEAPNSSANDBOXCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsSandboxChannelResponse;

class DeleteApnsSandboxChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteApnsSandboxChannelResponsePrivate(DeleteApnsSandboxChannelResponse * const q);

    void parseDeleteApnsSandboxChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApnsSandboxChannelResponse)
    Q_DISABLE_COPY(DeleteApnsSandboxChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
