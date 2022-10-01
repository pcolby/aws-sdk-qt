// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONFEEDBACKREQUEST_H
#define QTAWS_DESCRIBERECOMMENDATIONFEEDBACKREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRecommendationFeedbackRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DescribeRecommendationFeedbackRequest : public CodeGuruReviewerRequest {

public:
    DescribeRecommendationFeedbackRequest(const DescribeRecommendationFeedbackRequest &other);
    DescribeRecommendationFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecommendationFeedbackRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
