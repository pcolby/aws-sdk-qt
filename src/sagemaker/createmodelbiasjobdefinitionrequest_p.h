// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELBIASJOBDEFINITIONREQUEST_P_H
#define QTAWS_CREATEMODELBIASJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createmodelbiasjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelBiasJobDefinitionRequest;

class CreateModelBiasJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateModelBiasJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   CreateModelBiasJobDefinitionRequest * const q);
    CreateModelBiasJobDefinitionRequestPrivate(const CreateModelBiasJobDefinitionRequestPrivate &other,
                                   CreateModelBiasJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelBiasJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
