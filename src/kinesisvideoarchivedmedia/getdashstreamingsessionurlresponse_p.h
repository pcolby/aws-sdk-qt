// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHSTREAMINGSESSIONURLRESPONSE_P_H
#define QTAWS_GETDASHSTREAMINGSESSIONURLRESPONSE_P_H

#include "kinesisvideoarchivedmediaresponse_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetDASHStreamingSessionURLResponse;

class GetDASHStreamingSessionURLResponsePrivate : public KinesisVideoArchivedMediaResponsePrivate {

public:

    explicit GetDASHStreamingSessionURLResponsePrivate(GetDASHStreamingSessionURLResponse * const q);

    void parseGetDASHStreamingSessionURLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDASHStreamingSessionURLResponse)
    Q_DISABLE_COPY(GetDASHStreamingSessionURLResponsePrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
