// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIGNALINGCHANNELRESPONSE_P_H
#define QTAWS_CREATESIGNALINGCHANNELRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class CreateSignalingChannelResponse;

class CreateSignalingChannelResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit CreateSignalingChannelResponsePrivate(CreateSignalingChannelResponse * const q);

    void parseCreateSignalingChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSignalingChannelResponse)
    Q_DISABLE_COPY(CreateSignalingChannelResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
