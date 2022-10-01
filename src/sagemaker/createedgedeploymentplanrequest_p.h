// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEDEPLOYMENTPLANREQUEST_P_H
#define QTAWS_CREATEEDGEDEPLOYMENTPLANREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createedgedeploymentplanrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgeDeploymentPlanRequest;

class CreateEdgeDeploymentPlanRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateEdgeDeploymentPlanRequestPrivate(const SageMakerRequest::Action action,
                                   CreateEdgeDeploymentPlanRequest * const q);
    CreateEdgeDeploymentPlanRequestPrivate(const CreateEdgeDeploymentPlanRequestPrivate &other,
                                   CreateEdgeDeploymentPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEdgeDeploymentPlanRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
