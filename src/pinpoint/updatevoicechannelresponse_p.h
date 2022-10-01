// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECHANNELRESPONSE_P_H
#define QTAWS_UPDATEVOICECHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceChannelResponse;

class UpdateVoiceChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateVoiceChannelResponsePrivate(UpdateVoiceChannelResponse * const q);

    void parseUpdateVoiceChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceChannelResponse)
    Q_DISABLE_COPY(UpdateVoiceChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
