// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTARGETEDSENTIMENTRESPONSE_P_H
#define QTAWS_DETECTTARGETEDSENTIMENTRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DetectTargetedSentimentResponse;

class DetectTargetedSentimentResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DetectTargetedSentimentResponsePrivate(DetectTargetedSentimentResponse * const q);

    void parseDetectTargetedSentimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectTargetedSentimentResponse)
    Q_DISABLE_COPY(DetectTargetedSentimentResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
