// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEDEPLOYMENTSTAGERESPONSE_P_H
#define QTAWS_CREATEEDGEDEPLOYMENTSTAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgeDeploymentStageResponse;

class CreateEdgeDeploymentStageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateEdgeDeploymentStageResponsePrivate(CreateEdgeDeploymentStageResponse * const q);

    void parseCreateEdgeDeploymentStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(CreateEdgeDeploymentStageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
