// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTEXTRESPONSE_P_H
#define QTAWS_DETECTTEXTRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DetectTextResponse;

class DetectTextResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DetectTextResponsePrivate(DetectTextResponse * const q);

    void parseDetectTextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectTextResponse)
    Q_DISABLE_COPY(DetectTextResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
