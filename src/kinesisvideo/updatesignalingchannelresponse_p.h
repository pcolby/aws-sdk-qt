// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNALINGCHANNELRESPONSE_P_H
#define QTAWS_UPDATESIGNALINGCHANNELRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateSignalingChannelResponse;

class UpdateSignalingChannelResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit UpdateSignalingChannelResponsePrivate(UpdateSignalingChannelResponse * const q);

    void parseUpdateSignalingChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSignalingChannelResponse)
    Q_DISABLE_COPY(UpdateSignalingChannelResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
