// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELQUALITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_DELETEMODELQUALITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletemodelqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelQualityJobDefinitionRequest;

class DeleteModelQualityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteModelQualityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteModelQualityJobDefinitionRequest * const q);
    DeleteModelQualityJobDefinitionRequestPrivate(const DeleteModelQualityJobDefinitionRequestPrivate &other,
                                   DeleteModelQualityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
