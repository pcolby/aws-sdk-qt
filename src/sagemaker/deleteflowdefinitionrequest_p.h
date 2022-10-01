// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWDEFINITIONREQUEST_P_H
#define QTAWS_DELETEFLOWDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteflowdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteFlowDefinitionRequest;

class DeleteFlowDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteFlowDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteFlowDefinitionRequest * const q);
    DeleteFlowDefinitionRequestPrivate(const DeleteFlowDefinitionRequestPrivate &other,
                                   DeleteFlowDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFlowDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
