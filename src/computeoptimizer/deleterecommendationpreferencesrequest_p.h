// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDATIONPREFERENCESREQUEST_P_H
#define QTAWS_DELETERECOMMENDATIONPREFERENCESREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "deleterecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class DeleteRecommendationPreferencesRequest;

class DeleteRecommendationPreferencesRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    DeleteRecommendationPreferencesRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   DeleteRecommendationPreferencesRequest * const q);
    DeleteRecommendationPreferencesRequestPrivate(const DeleteRecommendationPreferencesRequestPrivate &other,
                                   DeleteRecommendationPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
