// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECHANNELRESPONSE_P_H
#define QTAWS_GETVOICECHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceChannelResponse;

class GetVoiceChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetVoiceChannelResponsePrivate(GetVoiceChannelResponse * const q);

    void parseGetVoiceChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceChannelResponse)
    Q_DISABLE_COPY(GetVoiceChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
