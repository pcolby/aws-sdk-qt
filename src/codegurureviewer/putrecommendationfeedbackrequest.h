// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONFEEDBACKREQUEST_H
#define QTAWS_PUTRECOMMENDATIONFEEDBACKREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class PutRecommendationFeedbackRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT PutRecommendationFeedbackRequest : public CodeGuruReviewerRequest {

public:
    PutRecommendationFeedbackRequest(const PutRecommendationFeedbackRequest &other);
    PutRecommendationFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecommendationFeedbackRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
