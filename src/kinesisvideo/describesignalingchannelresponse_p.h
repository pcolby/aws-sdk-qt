// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIGNALINGCHANNELRESPONSE_P_H
#define QTAWS_DESCRIBESIGNALINGCHANNELRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeSignalingChannelResponse;

class DescribeSignalingChannelResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit DescribeSignalingChannelResponsePrivate(DescribeSignalingChannelResponse * const q);

    void parseDescribeSignalingChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSignalingChannelResponse)
    Q_DISABLE_COPY(DescribeSignalingChannelResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
