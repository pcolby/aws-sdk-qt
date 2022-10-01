// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTSTAGEREQUEST_P_H
#define QTAWS_DELETEEDGEDEPLOYMENTSTAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentStageRequest;

class DeleteEdgeDeploymentStageRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteEdgeDeploymentStageRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteEdgeDeploymentStageRequest * const q);
    DeleteEdgeDeploymentStageRequestPrivate(const DeleteEdgeDeploymentStageRequestPrivate &other,
                                   DeleteEdgeDeploymentStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEdgeDeploymentStageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
