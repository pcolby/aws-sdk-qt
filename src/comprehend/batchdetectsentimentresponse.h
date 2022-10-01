// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTSENTIMENTRESPONSE_H
#define QTAWS_BATCHDETECTSENTIMENTRESPONSE_H

#include "comprehendresponse.h"
#include "batchdetectsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectSentimentResponsePrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectSentimentResponse : public ComprehendResponse {
    Q_OBJECT

public:
    BatchDetectSentimentResponse(const BatchDetectSentimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDetectSentimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectSentimentResponse)
    Q_DISABLE_COPY(BatchDetectSentimentResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
