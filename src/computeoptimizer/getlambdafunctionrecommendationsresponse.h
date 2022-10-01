// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_H
#define QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getlambdafunctionrecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetLambdaFunctionRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetLambdaFunctionRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetLambdaFunctionRecommendationsResponse(const GetLambdaFunctionRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLambdaFunctionRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLambdaFunctionRecommendationsResponse)
    Q_DISABLE_COPY(GetLambdaFunctionRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
