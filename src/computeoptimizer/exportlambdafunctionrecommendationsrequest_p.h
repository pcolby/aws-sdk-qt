// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_P_H
#define QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "exportlambdafunctionrecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportLambdaFunctionRecommendationsRequest;

class ExportLambdaFunctionRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    ExportLambdaFunctionRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   ExportLambdaFunctionRecommendationsRequest * const q);
    ExportLambdaFunctionRecommendationsRequestPrivate(const ExportLambdaFunctionRecommendationsRequestPrivate &other,
                                   ExportLambdaFunctionRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportLambdaFunctionRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
