// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTSENTIMENTRESPONSE_P_H
#define QTAWS_BATCHDETECTSENTIMENTRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectSentimentResponse;

class BatchDetectSentimentResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit BatchDetectSentimentResponsePrivate(BatchDetectSentimentResponse * const q);

    void parseBatchDetectSentimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDetectSentimentResponse)
    Q_DISABLE_COPY(BatchDetectSentimentResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
