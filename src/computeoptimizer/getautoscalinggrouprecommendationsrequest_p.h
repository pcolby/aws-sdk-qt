// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getautoscalinggrouprecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetAutoScalingGroupRecommendationsRequest;

class GetAutoScalingGroupRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetAutoScalingGroupRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetAutoScalingGroupRecommendationsRequest * const q);
    GetAutoScalingGroupRecommendationsRequestPrivate(const GetAutoScalingGroupRecommendationsRequestPrivate &other,
                                   GetAutoScalingGroupRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAutoScalingGroupRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
