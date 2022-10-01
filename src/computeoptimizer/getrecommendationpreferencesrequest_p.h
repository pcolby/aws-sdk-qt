// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONPREFERENCESREQUEST_P_H
#define QTAWS_GETRECOMMENDATIONPREFERENCESREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getrecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationPreferencesRequest;

class GetRecommendationPreferencesRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetRecommendationPreferencesRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetRecommendationPreferencesRequest * const q);
    GetRecommendationPreferencesRequestPrivate(const GetRecommendationPreferencesRequestPrivate &other,
                                   GetRecommendationPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
