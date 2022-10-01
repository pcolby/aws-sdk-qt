// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCERECOMMENDATIONSJOBSREQUEST_P_H
#define QTAWS_LISTINFERENCERECOMMENDATIONSJOBSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listinferencerecommendationsjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListInferenceRecommendationsJobsRequest;

class ListInferenceRecommendationsJobsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListInferenceRecommendationsJobsRequestPrivate(const SageMakerRequest::Action action,
                                   ListInferenceRecommendationsJobsRequest * const q);
    ListInferenceRecommendationsJobsRequestPrivate(const ListInferenceRecommendationsJobsRequestPrivate &other,
                                   ListInferenceRecommendationsJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInferenceRecommendationsJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
