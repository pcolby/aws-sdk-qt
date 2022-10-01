// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_H
#define QTAWS_CREATEMODELEXPLAINABILITYJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelExplainabilityJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelExplainabilityJobDefinitionRequest : public SageMakerRequest {

public:
    CreateModelExplainabilityJobDefinitionRequest(const CreateModelExplainabilityJobDefinitionRequest &other);
    CreateModelExplainabilityJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelExplainabilityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
