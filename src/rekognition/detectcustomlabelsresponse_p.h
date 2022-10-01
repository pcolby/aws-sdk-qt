// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTCUSTOMLABELSRESPONSE_P_H
#define QTAWS_DETECTCUSTOMLABELSRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DetectCustomLabelsResponse;

class DetectCustomLabelsResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DetectCustomLabelsResponsePrivate(DetectCustomLabelsResponse * const q);

    void parseDetectCustomLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectCustomLabelsResponse)
    Q_DISABLE_COPY(DetectCustomLabelsResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
