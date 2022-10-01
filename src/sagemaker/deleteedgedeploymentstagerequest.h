// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTSTAGEREQUEST_H
#define QTAWS_DELETEEDGEDEPLOYMENTSTAGEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentStageRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteEdgeDeploymentStageRequest : public SageMakerRequest {

public:
    DeleteEdgeDeploymentStageRequest(const DeleteEdgeDeploymentStageRequest &other);
    DeleteEdgeDeploymentStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEdgeDeploymentStageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
