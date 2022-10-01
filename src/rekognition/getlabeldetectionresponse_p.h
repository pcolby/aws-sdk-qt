// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLABELDETECTIONRESPONSE_P_H
#define QTAWS_GETLABELDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetLabelDetectionResponse;

class GetLabelDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetLabelDetectionResponsePrivate(GetLabelDetectionResponse * const q);

    void parseGetLabelDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLabelDetectionResponse)
    Q_DISABLE_COPY(GetLabelDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
