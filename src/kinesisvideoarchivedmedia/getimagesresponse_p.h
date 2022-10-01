// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGESRESPONSE_P_H
#define QTAWS_GETIMAGESRESPONSE_P_H

#include "kinesisvideoarchivedmediaresponse_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetImagesResponse;

class GetImagesResponsePrivate : public KinesisVideoArchivedMediaResponsePrivate {

public:

    explicit GetImagesResponsePrivate(GetImagesResponse * const q);

    void parseGetImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImagesResponse)
    Q_DISABLE_COPY(GetImagesResponsePrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
