// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTFACESRESPONSE_P_H
#define QTAWS_DETECTFACESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DetectFacesResponse;

class DetectFacesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DetectFacesResponsePrivate(DetectFacesResponse * const q);

    void parseDetectFacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectFacesResponse)
    Q_DISABLE_COPY(DetectFacesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
