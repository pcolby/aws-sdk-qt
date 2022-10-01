// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_UPDATEPIPELINEEXECUTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatepipelineexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdatePipelineExecutionRequest;

class UpdatePipelineExecutionRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdatePipelineExecutionRequestPrivate(const SageMakerRequest::Action action,
                                   UpdatePipelineExecutionRequest * const q);
    UpdatePipelineExecutionRequestPrivate(const UpdatePipelineExecutionRequestPrivate &other,
                                   UpdatePipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
