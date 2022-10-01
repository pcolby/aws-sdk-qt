// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSTEPSREQUEST_P_H
#define QTAWS_LISTPIPELINEEXECUTIONSTEPSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listpipelineexecutionstepsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineExecutionStepsRequest;

class ListPipelineExecutionStepsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListPipelineExecutionStepsRequestPrivate(const SageMakerRequest::Action action,
                                   ListPipelineExecutionStepsRequest * const q);
    ListPipelineExecutionStepsRequestPrivate(const ListPipelineExecutionStepsRequestPrivate &other,
                                   ListPipelineExecutionStepsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPipelineExecutionStepsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
