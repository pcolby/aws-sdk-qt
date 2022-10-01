// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONFEEDBACKRESPONSE_P_H
#define QTAWS_LISTRECOMMENDATIONFEEDBACKRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationFeedbackResponse;

class ListRecommendationFeedbackResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit ListRecommendationFeedbackResponsePrivate(ListRecommendationFeedbackResponse * const q);

    void parseListRecommendationFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecommendationFeedbackResponse)
    Q_DISABLE_COPY(ListRecommendationFeedbackResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
