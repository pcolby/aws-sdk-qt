// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAQUALITYJOBDEFINITIONREQUEST_H
#define QTAWS_DELETEDATAQUALITYJOBDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteDataQualityJobDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteDataQualityJobDefinitionRequest : public SageMakerRequest {

public:
    DeleteDataQualityJobDefinitionRequest(const DeleteDataQualityJobDefinitionRequest &other);
    DeleteDataQualityJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataQualityJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
