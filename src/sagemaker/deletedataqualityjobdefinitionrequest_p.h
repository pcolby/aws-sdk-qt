// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAQUALITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_DELETEDATAQUALITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletedataqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteDataQualityJobDefinitionRequest;

class DeleteDataQualityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteDataQualityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteDataQualityJobDefinitionRequest * const q);
    DeleteDataQualityJobDefinitionRequestPrivate(const DeleteDataQualityJobDefinitionRequestPrivate &other,
                                   DeleteDataQualityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
