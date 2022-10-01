// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBEPIPELINEEXECUTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describepipelineexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineExecutionRequest;

class DescribePipelineExecutionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribePipelineExecutionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribePipelineExecutionRequest * const q);
    DescribePipelineExecutionRequestPrivate(const DescribePipelineExecutionRequestPrivate &other,
                                   DescribePipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
