// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_H
#define QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "exportlambdafunctionrecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportLambdaFunctionRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportLambdaFunctionRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    ExportLambdaFunctionRecommendationsResponse(const ExportLambdaFunctionRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportLambdaFunctionRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportLambdaFunctionRecommendationsResponse)
    Q_DISABLE_COPY(ExportLambdaFunctionRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
