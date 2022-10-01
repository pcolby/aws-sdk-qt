// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTPLANREQUEST_P_H
#define QTAWS_DELETEEDGEDEPLOYMENTPLANREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteedgedeploymentplanrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentPlanRequest;

class DeleteEdgeDeploymentPlanRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteEdgeDeploymentPlanRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteEdgeDeploymentPlanRequest * const q);
    DeleteEdgeDeploymentPlanRequestPrivate(const DeleteEdgeDeploymentPlanRequestPrivate &other,
                                   DeleteEdgeDeploymentPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEdgeDeploymentPlanRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
