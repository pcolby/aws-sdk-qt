// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSENTIMENTRESPONSE_P_H
#define QTAWS_DETECTSENTIMENTRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DetectSentimentResponse;

class DetectSentimentResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DetectSentimentResponsePrivate(DetectSentimentResponse * const q);

    void parseDetectSentimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectSentimentResponse)
    Q_DISABLE_COPY(DetectSentimentResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
