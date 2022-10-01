// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAQUALITYJOBDEFINITIONREQUEST_P_H
#define QTAWS_CREATEDATAQUALITYJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createdataqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateDataQualityJobDefinitionRequest;

class CreateDataQualityJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateDataQualityJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   CreateDataQualityJobDefinitionRequest * const q);
    CreateDataQualityJobDefinitionRequestPrivate(const CreateDataQualityJobDefinitionRequestPrivate &other,
                                   CreateDataQualityJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
