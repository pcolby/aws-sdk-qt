// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNALINGCHANNELENDPOINTRESPONSE_P_H
#define QTAWS_GETSIGNALINGCHANNELENDPOINTRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class GetSignalingChannelEndpointResponse;

class GetSignalingChannelEndpointResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit GetSignalingChannelEndpointResponsePrivate(GetSignalingChannelEndpointResponse * const q);

    void parseGetSignalingChannelEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSignalingChannelEndpointResponse)
    Q_DISABLE_COPY(GetSignalingChannelEndpointResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
