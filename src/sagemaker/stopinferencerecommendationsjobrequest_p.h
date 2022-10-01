// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCERECOMMENDATIONSJOBREQUEST_P_H
#define QTAWS_STOPINFERENCERECOMMENDATIONSJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopinferencerecommendationsjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopInferenceRecommendationsJobRequest;

class StopInferenceRecommendationsJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopInferenceRecommendationsJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopInferenceRecommendationsJobRequest * const q);
    StopInferenceRecommendationsJobRequestPrivate(const StopInferenceRecommendationsJobRequestPrivate &other,
                                   StopInferenceRecommendationsJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopInferenceRecommendationsJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
