// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONFEEDBACKREQUEST_P_H
#define QTAWS_LISTRECOMMENDATIONFEEDBACKREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "listrecommendationfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationFeedbackRequest;

class ListRecommendationFeedbackRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    ListRecommendationFeedbackRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   ListRecommendationFeedbackRequest * const q);
    ListRecommendationFeedbackRequestPrivate(const ListRecommendationFeedbackRequestPrivate &other,
                                   ListRecommendationFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecommendationFeedbackRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
