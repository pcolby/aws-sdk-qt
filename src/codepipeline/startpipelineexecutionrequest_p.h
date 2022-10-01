// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_STARTPIPELINEEXECUTIONREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "startpipelineexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class StartPipelineExecutionRequest;

class StartPipelineExecutionRequestPrivate : public CodePipelineRequestPrivate {

public:
    StartPipelineExecutionRequestPrivate(const CodePipelineRequest::Action action,
                                   StartPipelineExecutionRequest * const q);
    StartPipelineExecutionRequestPrivate(const StartPipelineExecutionRequestPrivate &other,
                                   StartPipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPipelineExecutionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
