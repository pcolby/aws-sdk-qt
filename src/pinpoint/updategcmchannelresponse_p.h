// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGCMCHANNELRESPONSE_P_H
#define QTAWS_UPDATEGCMCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateGcmChannelResponse;

class UpdateGcmChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateGcmChannelResponsePrivate(UpdateGcmChannelResponse * const q);

    void parseUpdateGcmChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGcmChannelResponse)
    Q_DISABLE_COPY(UpdateGcmChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
