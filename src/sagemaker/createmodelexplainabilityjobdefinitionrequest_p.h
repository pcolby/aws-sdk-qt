// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_CREATEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createmodelexplainabilityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelExplainabilityJobDefinitionRequest;

class CreateModelExplainabilityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateModelExplainabilityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   CreateModelExplainabilityJobDefinitionRequest * const q);
    CreateModelExplainabilityJobDefinitionRequestPrivate(const CreateModelExplainabilityJobDefinitionRequestPrivate &other,
                                   CreateModelExplainabilityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelExplainabilityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
