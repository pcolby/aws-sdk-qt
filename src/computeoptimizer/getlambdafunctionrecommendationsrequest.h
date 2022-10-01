// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_H
#define QTAWS_GETLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetLambdaFunctionRecommendationsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetLambdaFunctionRecommendationsRequest : public ComputeOptimizerRequest {

public:
    GetLambdaFunctionRecommendationsRequest(const GetLambdaFunctionRecommendationsRequest &other);
    GetLambdaFunctionRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLambdaFunctionRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
