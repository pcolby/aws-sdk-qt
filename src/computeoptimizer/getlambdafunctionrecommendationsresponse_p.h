// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetLambdaFunctionRecommendationsResponse;

class GetLambdaFunctionRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetLambdaFunctionRecommendationsResponsePrivate(GetLambdaFunctionRecommendationsResponse * const q);

    void parseGetLambdaFunctionRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLambdaFunctionRecommendationsResponse)
    Q_DISABLE_COPY(GetLambdaFunctionRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
