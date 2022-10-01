// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONFEEDBACKRESPONSE_H
#define QTAWS_LISTRECOMMENDATIONFEEDBACKRESPONSE_H

#include "codegurureviewerresponse.h"
#include "listrecommendationfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationFeedbackResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListRecommendationFeedbackResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    ListRecommendationFeedbackResponse(const ListRecommendationFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecommendationFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendationFeedbackResponse)
    Q_DISABLE_COPY(ListRecommendationFeedbackResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
