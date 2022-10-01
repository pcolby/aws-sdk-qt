// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_DELETEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletemodelexplainabilityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelExplainabilityJobDefinitionRequest;

class DeleteModelExplainabilityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteModelExplainabilityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteModelExplainabilityJobDefinitionRequest * const q);
    DeleteModelExplainabilityJobDefinitionRequestPrivate(const DeleteModelExplainabilityJobDefinitionRequestPrivate &other,
                                   DeleteModelExplainabilityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelExplainabilityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
