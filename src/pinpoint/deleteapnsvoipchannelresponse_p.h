// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSVOIPCHANNELRESPONSE_P_H
#define QTAWS_DELETEAPNSVOIPCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsVoipChannelResponse;

class DeleteApnsVoipChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteApnsVoipChannelResponsePrivate(DeleteApnsVoipChannelResponse * const q);

    void parseDeleteApnsVoipChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApnsVoipChannelResponse)
    Q_DISABLE_COPY(DeleteApnsVoipChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
