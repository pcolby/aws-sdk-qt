// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHLSSTREAMINGSESSIONURLRESPONSE_P_H
#define QTAWS_GETHLSSTREAMINGSESSIONURLRESPONSE_P_H

#include "kinesisvideoarchivedmediaresponse_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetHLSStreamingSessionURLResponse;

class GetHLSStreamingSessionURLResponsePrivate : public KinesisVideoArchivedMediaResponsePrivate {

public:

    explicit GetHLSStreamingSessionURLResponsePrivate(GetHLSStreamingSessionURLResponse * const q);

    void parseGetHLSStreamingSessionURLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHLSStreamingSessionURLResponse)
    Q_DISABLE_COPY(GetHLSStreamingSessionURLResponsePrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
