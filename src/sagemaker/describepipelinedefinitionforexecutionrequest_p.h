// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBEPIPELINEDEFINITIONFOREXECUTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describepipelinedefinitionforexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineDefinitionForExecutionRequest;

class DescribePipelineDefinitionForExecutionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribePipelineDefinitionForExecutionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribePipelineDefinitionForExecutionRequest * const q);
    DescribePipelineDefinitionForExecutionRequestPrivate(const DescribePipelineDefinitionForExecutionRequestPrivate &other,
                                   DescribePipelineDefinitionForExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePipelineDefinitionForExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
