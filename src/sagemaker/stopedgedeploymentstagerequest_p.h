// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEDEPLOYMENTSTAGEREQUEST_P_H
#define QTAWS_STOPEDGEDEPLOYMENTSTAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class StopEdgeDeploymentStageRequest;

class StopEdgeDeploymentStageRequestPrivate : public SageMakerRequestPrivate {

public:
    StopEdgeDeploymentStageRequestPrivate(const SageMakerRequest::Action action,
                                   StopEdgeDeploymentStageRequest * const q);
    StopEdgeDeploymentStageRequestPrivate(const StopEdgeDeploymentStageRequestPrivate &other,
                                   StopEdgeDeploymentStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopEdgeDeploymentStageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
