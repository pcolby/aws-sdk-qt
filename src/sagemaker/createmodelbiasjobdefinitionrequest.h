// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELBIASJOBDEFINITIONREQUEST_H
#define QTAWS_CREATEMODELBIASJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelBiasJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelBiasJobDefinitionRequest : public SageMakerRequest {

public:
    CreateModelBiasJobDefinitionRequest(const CreateModelBiasJobDefinitionRequest &other);
    CreateModelBiasJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelBiasJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
