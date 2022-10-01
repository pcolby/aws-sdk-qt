// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEDEPLOYMENTSTAGERESPONSE_P_H
#define QTAWS_STOPEDGEDEPLOYMENTSTAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopEdgeDeploymentStageResponse;

class StopEdgeDeploymentStageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopEdgeDeploymentStageResponsePrivate(StopEdgeDeploymentStageResponse * const q);

    void parseStopEdgeDeploymentStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(StopEdgeDeploymentStageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
