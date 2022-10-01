// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTMODERATIONLABELSRESPONSE_P_H
#define QTAWS_DETECTMODERATIONLABELSRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DetectModerationLabelsResponse;

class DetectModerationLabelsResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DetectModerationLabelsResponsePrivate(DetectModerationLabelsResponse * const q);

    void parseDetectModerationLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectModerationLabelsResponse)
    Q_DISABLE_COPY(DetectModerationLabelsResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
