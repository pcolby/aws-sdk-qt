// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTPLANREQUEST_H
#define QTAWS_DELETEEDGEDEPLOYMENTPLANREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentPlanRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteEdgeDeploymentPlanRequest : public SageMakerRequest {

public:
    DeleteEdgeDeploymentPlanRequest(const DeleteEdgeDeploymentPlanRequest &other);
    DeleteEdgeDeploymentPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEdgeDeploymentPlanRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
