// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACESEARCHRESPONSE_P_H
#define QTAWS_GETFACESEARCHRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetFaceSearchResponse;

class GetFaceSearchResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetFaceSearchResponsePrivate(GetFaceSearchResponse * const q);

    void parseGetFaceSearchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFaceSearchResponse)
    Q_DISABLE_COPY(GetFaceSearchResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
