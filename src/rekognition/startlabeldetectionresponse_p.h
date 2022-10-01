// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLABELDETECTIONRESPONSE_P_H
#define QTAWS_STARTLABELDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartLabelDetectionResponse;

class StartLabelDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartLabelDetectionResponsePrivate(StartLabelDetectionResponse * const q);

    void parseStartLabelDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartLabelDetectionResponse)
    Q_DISABLE_COPY(StartLabelDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
