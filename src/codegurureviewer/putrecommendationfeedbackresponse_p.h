// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONFEEDBACKRESPONSE_P_H
#define QTAWS_PUTRECOMMENDATIONFEEDBACKRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class PutRecommendationFeedbackResponse;

class PutRecommendationFeedbackResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit PutRecommendationFeedbackResponsePrivate(PutRecommendationFeedbackResponse * const q);

    void parsePutRecommendationFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRecommendationFeedbackResponse)
    Q_DISABLE_COPY(PutRecommendationFeedbackResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
