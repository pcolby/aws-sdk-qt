// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEDGEDEPLOYMENTPLANREQUEST_P_H
#define QTAWS_DESCRIBEEDGEDEPLOYMENTPLANREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeedgedeploymentplanrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEdgeDeploymentPlanRequest;

class DescribeEdgeDeploymentPlanRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeEdgeDeploymentPlanRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeEdgeDeploymentPlanRequest * const q);
    DescribeEdgeDeploymentPlanRequestPrivate(const DescribeEdgeDeploymentPlanRequestPrivate &other,
                                   DescribeEdgeDeploymentPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEdgeDeploymentPlanRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
