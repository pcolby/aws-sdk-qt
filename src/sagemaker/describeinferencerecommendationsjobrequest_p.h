// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBREQUEST_P_H
#define QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeinferencerecommendationsjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeInferenceRecommendationsJobRequest;

class DescribeInferenceRecommendationsJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeInferenceRecommendationsJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeInferenceRecommendationsJobRequest * const q);
    DescribeInferenceRecommendationsJobRequestPrivate(const DescribeInferenceRecommendationsJobRequestPrivate &other,
                                   DescribeInferenceRecommendationsJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInferenceRecommendationsJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
