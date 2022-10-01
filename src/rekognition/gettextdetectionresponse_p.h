// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEXTDETECTIONRESPONSE_P_H
#define QTAWS_GETTEXTDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetTextDetectionResponse;

class GetTextDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetTextDetectionResponsePrivate(GetTextDetectionResponse * const q);

    void parseGetTextDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTextDetectionResponse)
    Q_DISABLE_COPY(GetTextDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
