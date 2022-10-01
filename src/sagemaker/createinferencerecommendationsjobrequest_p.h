// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFERENCERECOMMENDATIONSJOBREQUEST_P_H
#define QTAWS_CREATEINFERENCERECOMMENDATIONSJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createinferencerecommendationsjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateInferenceRecommendationsJobRequest;

class CreateInferenceRecommendationsJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateInferenceRecommendationsJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateInferenceRecommendationsJobRequest * const q);
    CreateInferenceRecommendationsJobRequestPrivate(const CreateInferenceRecommendationsJobRequestPrivate &other,
                                   CreateInferenceRecommendationsJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInferenceRecommendationsJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
