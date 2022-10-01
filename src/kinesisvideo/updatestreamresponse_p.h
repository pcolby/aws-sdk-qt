// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMRESPONSE_P_H
#define QTAWS_UPDATESTREAMRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateStreamResponse;

class UpdateStreamResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit UpdateStreamResponsePrivate(UpdateStreamResponse * const q);

    void parseUpdateStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStreamResponse)
    Q_DISABLE_COPY(UpdateStreamResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
