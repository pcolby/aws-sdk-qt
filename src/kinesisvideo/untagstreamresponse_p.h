// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSTREAMRESPONSE_P_H
#define QTAWS_UNTAGSTREAMRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class UntagStreamResponse;

class UntagStreamResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit UntagStreamResponsePrivate(UntagStreamResponse * const q);

    void parseUntagStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagStreamResponse)
    Q_DISABLE_COPY(UntagStreamResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
