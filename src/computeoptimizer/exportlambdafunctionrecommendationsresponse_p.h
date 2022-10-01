// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportLambdaFunctionRecommendationsResponse;

class ExportLambdaFunctionRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit ExportLambdaFunctionRecommendationsResponsePrivate(ExportLambdaFunctionRecommendationsResponse * const q);

    void parseExportLambdaFunctionRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportLambdaFunctionRecommendationsResponse)
    Q_DISABLE_COPY(ExportLambdaFunctionRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
