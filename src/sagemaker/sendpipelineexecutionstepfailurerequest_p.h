// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPFAILUREREQUEST_P_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPFAILUREREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "sendpipelineexecutionstepfailurerequest.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepFailureRequest;

class SendPipelineExecutionStepFailureRequestPrivate : public SageMakerRequestPrivate {

public:
    SendPipelineExecutionStepFailureRequestPrivate(const SageMakerRequest::Action action,
                                   SendPipelineExecutionStepFailureRequest * const q);
    SendPipelineExecutionStepFailureRequestPrivate(const SendPipelineExecutionStepFailureRequestPrivate &other,
                                   SendPipelineExecutionStepFailureRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendPipelineExecutionStepFailureRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
