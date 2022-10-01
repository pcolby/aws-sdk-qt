// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSENTIMENTRESPONSE_H
#define QTAWS_DETECTSENTIMENTRESPONSE_H

#include "comprehendresponse.h"
#include "detectsentimentrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectSentimentResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DetectSentimentResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DetectSentimentResponse(const DetectSentimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectSentimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectSentimentResponse)
    Q_DISABLE_COPY(DetectSentimentResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
