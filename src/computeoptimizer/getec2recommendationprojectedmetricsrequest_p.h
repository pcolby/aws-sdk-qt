// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSREQUEST_P_H
#define QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getec2recommendationprojectedmetricsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2RecommendationProjectedMetricsRequest;

class GetEC2RecommendationProjectedMetricsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetEC2RecommendationProjectedMetricsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetEC2RecommendationProjectedMetricsRequest * const q);
    GetEC2RecommendationProjectedMetricsRequestPrivate(const GetEC2RecommendationProjectedMetricsRequestPrivate &other,
                                   GetEC2RecommendationProjectedMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEC2RecommendationProjectedMetricsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
