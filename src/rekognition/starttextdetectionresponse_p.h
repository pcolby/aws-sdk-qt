// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTEXTDETECTIONRESPONSE_P_H
#define QTAWS_STARTTEXTDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartTextDetectionResponse;

class StartTextDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartTextDetectionResponsePrivate(StartTextDetectionResponse * const q);

    void parseStartTextDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTextDetectionResponse)
    Q_DISABLE_COPY(StartTextDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
