// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEDGEDEPLOYMENTPLANRESPONSE_P_H
#define QTAWS_DESCRIBEEDGEDEPLOYMENTPLANRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeEdgeDeploymentPlanResponse;

class DescribeEdgeDeploymentPlanResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeEdgeDeploymentPlanResponsePrivate(DescribeEdgeDeploymentPlanResponse * const q);

    void parseDescribeEdgeDeploymentPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEdgeDeploymentPlanResponse)
    Q_DISABLE_COPY(DescribeEdgeDeploymentPlanResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
