// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONFEEDBACKRESPONSE_H
#define QTAWS_DESCRIBERECOMMENDATIONFEEDBACKRESPONSE_H

#include "codegurureviewerresponse.h"
#include "describerecommendationfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRecommendationFeedbackResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DescribeRecommendationFeedbackResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    DescribeRecommendationFeedbackResponse(const DescribeRecommendationFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecommendationFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecommendationFeedbackResponse)
    Q_DISABLE_COPY(DescribeRecommendationFeedbackResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
