// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getlambdafunctionrecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetLambdaFunctionRecommendationsRequest;

class GetLambdaFunctionRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetLambdaFunctionRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetLambdaFunctionRecommendationsRequest * const q);
    GetLambdaFunctionRecommendationsRequestPrivate(const GetLambdaFunctionRecommendationsRequestPrivate &other,
                                   GetLambdaFunctionRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLambdaFunctionRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
