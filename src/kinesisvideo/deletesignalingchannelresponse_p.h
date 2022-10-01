// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNALINGCHANNELRESPONSE_P_H
#define QTAWS_DELETESIGNALINGCHANNELRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class DeleteSignalingChannelResponse;

class DeleteSignalingChannelResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit DeleteSignalingChannelResponsePrivate(DeleteSignalingChannelResponse * const q);

    void parseDeleteSignalingChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSignalingChannelResponse)
    Q_DISABLE_COPY(DeleteSignalingChannelResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
