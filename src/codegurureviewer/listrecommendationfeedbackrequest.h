// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONFEEDBACKREQUEST_H
#define QTAWS_LISTRECOMMENDATIONFEEDBACKREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationFeedbackRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListRecommendationFeedbackRequest : public CodeGuruReviewerRequest {

public:
    ListRecommendationFeedbackRequest(const ListRecommendationFeedbackRequest &other);
    ListRecommendationFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendationFeedbackRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
