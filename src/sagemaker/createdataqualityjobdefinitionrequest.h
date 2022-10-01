// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAQUALITYJOBDEFINITIONREQUEST_H
#define QTAWS_CREATEDATAQUALITYJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateDataQualityJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateDataQualityJobDefinitionRequest : public SageMakerRequest {

public:
    CreateDataQualityJobDefinitionRequest(const CreateDataQualityJobDefinitionRequest &other);
    CreateDataQualityJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
