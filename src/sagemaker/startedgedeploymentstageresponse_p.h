// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEDGEDEPLOYMENTSTAGERESPONSE_P_H
#define QTAWS_STARTEDGEDEPLOYMENTSTAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StartEdgeDeploymentStageResponse;

class StartEdgeDeploymentStageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StartEdgeDeploymentStageResponsePrivate(StartEdgeDeploymentStageResponse * const q);

    void parseStartEdgeDeploymentStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(StartEdgeDeploymentStageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
