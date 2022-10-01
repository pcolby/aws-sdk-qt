// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEDEPLOYMENTSTAGEREQUEST_H
#define QTAWS_CREATEEDGEDEPLOYMENTSTAGEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgeDeploymentStageRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateEdgeDeploymentStageRequest : public SageMakerRequest {

public:
    CreateEdgeDeploymentStageRequest(const CreateEdgeDeploymentStageRequest &other);
    CreateEdgeDeploymentStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEdgeDeploymentStageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
