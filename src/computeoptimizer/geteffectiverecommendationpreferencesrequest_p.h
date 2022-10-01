// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESREQUEST_P_H
#define QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "geteffectiverecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEffectiveRecommendationPreferencesRequest;

class GetEffectiveRecommendationPreferencesRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetEffectiveRecommendationPreferencesRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetEffectiveRecommendationPreferencesRequest * const q);
    GetEffectiveRecommendationPreferencesRequestPrivate(const GetEffectiveRecommendationPreferencesRequestPrivate &other,
                                   GetEffectiveRecommendationPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEffectiveRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
