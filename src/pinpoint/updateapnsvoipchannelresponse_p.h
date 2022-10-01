// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSVOIPCHANNELRESPONSE_P_H
#define QTAWS_UPDATEAPNSVOIPCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsVoipChannelResponse;

class UpdateApnsVoipChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateApnsVoipChannelResponsePrivate(UpdateApnsVoipChannelResponse * const q);

    void parseUpdateApnsVoipChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApnsVoipChannelResponse)
    Q_DISABLE_COPY(UpdateApnsVoipChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
