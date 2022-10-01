// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELQUALITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_CREATEMODELQUALITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createmodelqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelQualityJobDefinitionRequest;

class CreateModelQualityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateModelQualityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   CreateModelQualityJobDefinitionRequest * const q);
    CreateModelQualityJobDefinitionRequestPrivate(const CreateModelQualityJobDefinitionRequestPrivate &other,
                                   CreateModelQualityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
