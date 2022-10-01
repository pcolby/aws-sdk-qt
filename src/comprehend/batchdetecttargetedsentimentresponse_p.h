// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTTARGETEDSENTIMENTRESPONSE_P_H
#define QTAWS_BATCHDETECTTARGETEDSENTIMENTRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectTargetedSentimentResponse;

class BatchDetectTargetedSentimentResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit BatchDetectTargetedSentimentResponsePrivate(BatchDetectTargetedSentimentResponse * const q);

    void parseBatchDetectTargetedSentimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDetectTargetedSentimentResponse)
    Q_DISABLE_COPY(BatchDetectTargetedSentimentResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
