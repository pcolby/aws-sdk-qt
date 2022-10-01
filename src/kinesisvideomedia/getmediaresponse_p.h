// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIARESPONSE_P_H
#define QTAWS_GETMEDIARESPONSE_P_H

#include "kinesisvideomediaresponse_p.h"

namespace QtAws {
namespace KinesisVideoMedia {

class GetMediaResponse;

class GetMediaResponsePrivate : public KinesisVideoMediaResponsePrivate {

public:

    explicit GetMediaResponsePrivate(GetMediaResponse * const q);

    void parseGetMediaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMediaResponse)
    Q_DISABLE_COPY(GetMediaResponsePrivate)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
