// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWDEFINITIONREQUEST_P_H
#define QTAWS_CREATEFLOWDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createflowdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateFlowDefinitionRequest;

class CreateFlowDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateFlowDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   CreateFlowDefinitionRequest * const q);
    CreateFlowDefinitionRequestPrivate(const CreateFlowDefinitionRequestPrivate &other,
                                   CreateFlowDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFlowDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
