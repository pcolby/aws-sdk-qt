// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_STOPPIPELINEEXECUTIONREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "stoppipelineexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class StopPipelineExecutionRequest;

class StopPipelineExecutionRequestPrivate : public CodePipelineRequestPrivate {

public:
    StopPipelineExecutionRequestPrivate(const CodePipelineRequest::Action action,
                                   StopPipelineExecutionRequest * const q);
    StopPipelineExecutionRequestPrivate(const StopPipelineExecutionRequestPrivate &other,
                                   StopPipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopPipelineExecutionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
