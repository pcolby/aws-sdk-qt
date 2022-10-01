// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWDEFINITIONREQUEST_H
#define QTAWS_DELETEFLOWDEFINITIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteFlowDefinitionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteFlowDefinitionRequest : public SageMakerRequest {

public:
    DeleteFlowDefinitionRequest(const DeleteFlowDefinitionRequest &other);
    DeleteFlowDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFlowDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
