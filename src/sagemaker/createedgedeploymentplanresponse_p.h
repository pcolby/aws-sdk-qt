// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEDEPLOYMENTPLANRESPONSE_P_H
#define QTAWS_CREATEEDGEDEPLOYMENTPLANRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgeDeploymentPlanResponse;

class CreateEdgeDeploymentPlanResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateEdgeDeploymentPlanResponsePrivate(CreateEdgeDeploymentPlanResponse * const q);

    void parseCreateEdgeDeploymentPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEdgeDeploymentPlanResponse)
    Q_DISABLE_COPY(CreateEdgeDeploymentPlanResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
