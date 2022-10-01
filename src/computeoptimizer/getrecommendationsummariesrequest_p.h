// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSUMMARIESREQUEST_P_H
#define QTAWS_GETRECOMMENDATIONSUMMARIESREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getrecommendationsummariesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationSummariesRequest;

class GetRecommendationSummariesRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetRecommendationSummariesRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetRecommendationSummariesRequest * const q);
    GetRecommendationSummariesRequestPrivate(const GetRecommendationSummariesRequestPrivate &other,
                                   GetRecommendationSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecommendationSummariesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
