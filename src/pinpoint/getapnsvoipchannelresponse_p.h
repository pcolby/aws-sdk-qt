// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSVOIPCHANNELRESPONSE_P_H
#define QTAWS_GETAPNSVOIPCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsVoipChannelResponse;

class GetApnsVoipChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetApnsVoipChannelResponsePrivate(GetApnsVoipChannelResponse * const q);

    void parseGetApnsVoipChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApnsVoipChannelResponse)
    Q_DISABLE_COPY(GetApnsVoipChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
