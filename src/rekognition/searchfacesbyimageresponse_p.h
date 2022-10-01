// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESBYIMAGERESPONSE_P_H
#define QTAWS_SEARCHFACESBYIMAGERESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesByImageResponse;

class SearchFacesByImageResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit SearchFacesByImageResponsePrivate(SearchFacesByImageResponse * const q);

    void parseSearchFacesByImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchFacesByImageResponse)
    Q_DISABLE_COPY(SearchFacesByImageResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
