// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONFEEDBACKRESPONSE_P_H
#define QTAWS_DESCRIBERECOMMENDATIONFEEDBACKRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRecommendationFeedbackResponse;

class DescribeRecommendationFeedbackResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit DescribeRecommendationFeedbackResponsePrivate(DescribeRecommendationFeedbackResponse * const q);

    void parseDescribeRecommendationFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecommendationFeedbackResponse)
    Q_DISABLE_COPY(DescribeRecommendationFeedbackResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
