// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONREQUEST_P_H
#define QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listpipelineparametersforexecutionrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineParametersForExecutionRequest;

class ListPipelineParametersForExecutionRequestPrivate : public SageMakerRequestPrivate {

public:
    ListPipelineParametersForExecutionRequestPrivate(const SageMakerRequest::Action action,
                                   ListPipelineParametersForExecutionRequest * const q);
    ListPipelineParametersForExecutionRequestPrivate(const ListPipelineParametersForExecutionRequestPrivate &other,
                                   ListPipelineParametersForExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPipelineParametersForExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
