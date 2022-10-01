// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFACEDETECTIONRESPONSE_P_H
#define QTAWS_STARTFACEDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartFaceDetectionResponse;

class StartFaceDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartFaceDetectionResponsePrivate(StartFaceDetectionResponse * const q);

    void parseStartFaceDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFaceDetectionResponse)
    Q_DISABLE_COPY(StartFaceDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
