// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_GETPIPELINEEXECUTIONREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "getpipelineexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineExecutionRequest;

class GetPipelineExecutionRequestPrivate : public CodePipelineRequestPrivate {

public:
    GetPipelineExecutionRequestPrivate(const CodePipelineRequest::Action action,
                                   GetPipelineExecutionRequest * const q);
    GetPipelineExecutionRequestPrivate(const GetPipelineExecutionRequestPrivate &other,
                                   GetPipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPipelineExecutionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
