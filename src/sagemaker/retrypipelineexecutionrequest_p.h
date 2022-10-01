// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_RETRYPIPELINEEXECUTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "retrypipelineexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class RetryPipelineExecutionRequest;

class RetryPipelineExecutionRequestPrivate : public SageMakerRequestPrivate {

public:
    RetryPipelineExecutionRequestPrivate(const SageMakerRequest::Action action,
                                   RetryPipelineExecutionRequest * const q);
    RetryPipelineExecutionRequestPrivate(const RetryPipelineExecutionRequestPrivate &other,
                                   RetryPipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetryPipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
