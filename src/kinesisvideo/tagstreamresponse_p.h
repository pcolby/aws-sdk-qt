// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSTREAMRESPONSE_P_H
#define QTAWS_TAGSTREAMRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class TagStreamResponse;

class TagStreamResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit TagStreamResponsePrivate(TagStreamResponse * const q);

    void parseTagStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagStreamResponse)
    Q_DISABLE_COPY(TagStreamResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
