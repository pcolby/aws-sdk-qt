// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2INSTANCERECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETEC2INSTANCERECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getec2instancerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2InstanceRecommendationsRequest;

class GetEC2InstanceRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetEC2InstanceRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetEC2InstanceRecommendationsRequest * const q);
    GetEC2InstanceRecommendationsRequestPrivate(const GetEC2InstanceRecommendationsRequestPrivate &other,
                                   GetEC2InstanceRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEC2InstanceRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
