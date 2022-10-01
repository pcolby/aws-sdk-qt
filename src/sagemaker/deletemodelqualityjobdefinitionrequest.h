// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELQUALITYJOBDEFINITIONREQUEST_H
#define QTAWS_DELETEMODELQUALITYJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelQualityJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelQualityJobDefinitionRequest : public SageMakerRequest {

public:
    DeleteModelQualityJobDefinitionRequest(const DeleteModelQualityJobDefinitionRequest &other);
    DeleteModelQualityJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
