// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONFEEDBACKREQUEST_P_H
#define QTAWS_PUTRECOMMENDATIONFEEDBACKREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "putrecommendationfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class PutRecommendationFeedbackRequest;

class PutRecommendationFeedbackRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    PutRecommendationFeedbackRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   PutRecommendationFeedbackRequest * const q);
    PutRecommendationFeedbackRequestPrivate(const PutRecommendationFeedbackRequestPrivate &other,
                                   PutRecommendationFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRecommendationFeedbackRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
