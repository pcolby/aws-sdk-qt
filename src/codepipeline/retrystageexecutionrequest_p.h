// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYSTAGEEXECUTIONREQUEST_P_H
#define QTAWS_RETRYSTAGEEXECUTIONREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "retrystageexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class RetryStageExecutionRequest;

class RetryStageExecutionRequestPrivate : public CodePipelineRequestPrivate {

public:
    RetryStageExecutionRequestPrivate(const CodePipelineRequest::Action action,
                                   RetryStageExecutionRequest * const q);
    RetryStageExecutionRequestPrivate(const RetryStageExecutionRequestPrivate &other,
                                   RetryStageExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetryStageExecutionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
