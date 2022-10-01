// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_H
#define QTAWS_EXPORTLAMBDAFUNCTIONRECOMMENDATIONSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportLambdaFunctionRecommendationsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportLambdaFunctionRecommendationsRequest : public ComputeOptimizerRequest {

public:
    ExportLambdaFunctionRecommendationsRequest(const ExportLambdaFunctionRecommendationsRequest &other);
    ExportLambdaFunctionRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportLambdaFunctionRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
