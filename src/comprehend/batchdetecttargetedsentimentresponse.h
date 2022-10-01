// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTTARGETEDSENTIMENTRESPONSE_H
#define QTAWS_BATCHDETECTTARGETEDSENTIMENTRESPONSE_H

#include "comprehendresponse.h"
#include "batchdetecttargetedsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectTargetedSentimentResponsePrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectTargetedSentimentResponse : public ComprehendResponse {
    Q_OBJECT

public:
    BatchDetectTargetedSentimentResponse(const BatchDetectTargetedSentimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDetectTargetedSentimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectTargetedSentimentResponse)
    Q_DISABLE_COPY(BatchDetectTargetedSentimentResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
