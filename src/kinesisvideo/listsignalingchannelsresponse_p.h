// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNALINGCHANNELSRESPONSE_P_H
#define QTAWS_LISTSIGNALINGCHANNELSRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class ListSignalingChannelsResponse;

class ListSignalingChannelsResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit ListSignalingChannelsResponsePrivate(ListSignalingChannelsResponse * const q);

    void parseListSignalingChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSignalingChannelsResponse)
    Q_DISABLE_COPY(ListSignalingChannelsResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
