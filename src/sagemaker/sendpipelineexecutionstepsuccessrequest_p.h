// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSREQUEST_P_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "sendpipelineexecutionstepsuccessrequest.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepSuccessRequest;

class SendPipelineExecutionStepSuccessRequestPrivate : public SageMakerRequestPrivate {

public:
    SendPipelineExecutionStepSuccessRequestPrivate(const SageMakerRequest::Action action,
                                   SendPipelineExecutionStepSuccessRequest * const q);
    SendPipelineExecutionStepSuccessRequestPrivate(const SendPipelineExecutionStepSuccessRequestPrivate &other,
                                   SendPipelineExecutionStepSuccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendPipelineExecutionStepSuccessRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
