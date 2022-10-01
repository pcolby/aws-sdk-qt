// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELBIASJOBDEFINITIONREQUEST_P_H
#define QTAWS_DELETEMODELBIASJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletemodelbiasjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelBiasJobDefinitionRequest;

class DeleteModelBiasJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteModelBiasJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteModelBiasJobDefinitionRequest * const q);
    DeleteModelBiasJobDefinitionRequestPrivate(const DeleteModelBiasJobDefinitionRequestPrivate &other,
                                   DeleteModelBiasJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelBiasJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
