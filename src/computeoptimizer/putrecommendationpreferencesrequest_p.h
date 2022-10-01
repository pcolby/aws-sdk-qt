// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONPREFERENCESREQUEST_P_H
#define QTAWS_PUTRECOMMENDATIONPREFERENCESREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "putrecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class PutRecommendationPreferencesRequest;

class PutRecommendationPreferencesRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    PutRecommendationPreferencesRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   PutRecommendationPreferencesRequest * const q);
    PutRecommendationPreferencesRequestPrivate(const PutRecommendationPreferencesRequestPrivate &other,
                                   PutRecommendationPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
