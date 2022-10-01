// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONFEEDBACKRESPONSE_H
#define QTAWS_PUTRECOMMENDATIONFEEDBACKRESPONSE_H

#include "codegurureviewerresponse.h"
#include "putrecommendationfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class PutRecommendationFeedbackResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT PutRecommendationFeedbackResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    PutRecommendationFeedbackResponse(const PutRecommendationFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRecommendationFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecommendationFeedbackResponse)
    Q_DISABLE_COPY(PutRecommendationFeedbackResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
