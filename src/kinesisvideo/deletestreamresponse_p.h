// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMRESPONSE_P_H
#define QTAWS_DELETESTREAMRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class DeleteStreamResponse;

class DeleteStreamResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit DeleteStreamResponsePrivate(DeleteStreamResponse * const q);

    void parseDeleteStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStreamResponse)
    Q_DISABLE_COPY(DeleteStreamResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
