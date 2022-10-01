// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_STARTPIPELINEEXECUTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "startpipelineexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class StartPipelineExecutionRequest;

class StartPipelineExecutionRequestPrivate : public SageMakerRequestPrivate {

public:
    StartPipelineExecutionRequestPrivate(const SageMakerRequest::Action action,
                                   StartPipelineExecutionRequest * const q);
    StartPipelineExecutionRequestPrivate(const StartPipelineExecutionRequestPrivate &other,
                                   StartPipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
