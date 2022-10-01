// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAFORFRAGMENTLISTRESPONSE_P_H
#define QTAWS_GETMEDIAFORFRAGMENTLISTRESPONSE_P_H

#include "kinesisvideoarchivedmediaresponse_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetMediaForFragmentListResponse;

class GetMediaForFragmentListResponsePrivate : public KinesisVideoArchivedMediaResponsePrivate {

public:

    explicit GetMediaForFragmentListResponsePrivate(GetMediaForFragmentListResponse * const q);

    void parseGetMediaForFragmentListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMediaForFragmentListResponse)
    Q_DISABLE_COPY(GetMediaForFragmentListResponsePrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
