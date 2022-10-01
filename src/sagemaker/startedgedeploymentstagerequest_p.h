// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEDGEDEPLOYMENTSTAGEREQUEST_P_H
#define QTAWS_STARTEDGEDEPLOYMENTSTAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "startedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class StartEdgeDeploymentStageRequest;

class StartEdgeDeploymentStageRequestPrivate : public SageMakerRequestPrivate {

public:
    StartEdgeDeploymentStageRequestPrivate(const SageMakerRequest::Action action,
                                   StartEdgeDeploymentStageRequest * const q);
    StartEdgeDeploymentStageRequestPrivate(const StartEdgeDeploymentStageRequestPrivate &other,
                                   StartEdgeDeploymentStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartEdgeDeploymentStageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
