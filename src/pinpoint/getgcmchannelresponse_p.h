// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGCMCHANNELRESPONSE_P_H
#define QTAWS_GETGCMCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetGcmChannelResponse;

class GetGcmChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetGcmChannelResponsePrivate(GetGcmChannelResponse * const q);

    void parseGetGcmChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGcmChannelResponse)
    Q_DISABLE_COPY(GetGcmChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
