// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFACESEARCHRESPONSE_P_H
#define QTAWS_STARTFACESEARCHRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartFaceSearchResponse;

class StartFaceSearchResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartFaceSearchResponsePrivate(StartFaceSearchResponse * const q);

    void parseStartFaceSearchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFaceSearchResponse)
    Q_DISABLE_COPY(StartFaceSearchResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
