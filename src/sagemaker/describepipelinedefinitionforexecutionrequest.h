// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONREQUEST_H
#define QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineDefinitionForExecutionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribePipelineDefinitionForExecutionRequest : public SageMakerRequest {

public:
    DescribePipelineDefinitionForExecutionRequest(const DescribePipelineDefinitionForExecutionRequest &other);
    DescribePipelineDefinitionForExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelineDefinitionForExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
