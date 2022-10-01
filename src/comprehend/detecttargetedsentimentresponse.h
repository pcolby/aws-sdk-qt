// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTARGETEDSENTIMENTRESPONSE_H
#define QTAWS_DETECTTARGETEDSENTIMENTRESPONSE_H

#include "comprehendresponse.h"
#include "detecttargetedsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectTargetedSentimentResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DetectTargetedSentimentResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DetectTargetedSentimentResponse(const DetectTargetedSentimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectTargetedSentimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectTargetedSentimentResponse)
    Q_DISABLE_COPY(DetectTargetedSentimentResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
