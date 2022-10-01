// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCERECOMMENDATIONSJOBREQUEST_H
#define QTAWS_STOPINFERENCERECOMMENDATIONSJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopInferenceRecommendationsJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopInferenceRecommendationsJobRequest : public SageMakerRequest {

public:
    StopInferenceRecommendationsJobRequest(const StopInferenceRecommendationsJobRequest &other);
    StopInferenceRecommendationsJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInferenceRecommendationsJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
