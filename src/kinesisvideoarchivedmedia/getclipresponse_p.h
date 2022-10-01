// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIPRESPONSE_P_H
#define QTAWS_GETCLIPRESPONSE_P_H

#include "kinesisvideoarchivedmediaresponse_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetClipResponse;

class GetClipResponsePrivate : public KinesisVideoArchivedMediaResponsePrivate {

public:

    explicit GetClipResponsePrivate(GetClipResponse * const q);

    void parseGetClipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClipResponse)
    Q_DISABLE_COPY(GetClipResponsePrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
