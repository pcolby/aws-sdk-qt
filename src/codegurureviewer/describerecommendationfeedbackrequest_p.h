// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONFEEDBACKREQUEST_P_H
#define QTAWS_DESCRIBERECOMMENDATIONFEEDBACKREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "describerecommendationfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRecommendationFeedbackRequest;

class DescribeRecommendationFeedbackRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    DescribeRecommendationFeedbackRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   DescribeRecommendationFeedbackRequest * const q);
    DescribeRecommendationFeedbackRequestPrivate(const DescribeRecommendationFeedbackRequestPrivate &other,
                                   DescribeRecommendationFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecommendationFeedbackRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
