// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTSTAGERESPONSE_P_H
#define QTAWS_DELETEEDGEDEPLOYMENTSTAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentStageResponse;

class DeleteEdgeDeploymentStageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteEdgeDeploymentStageResponsePrivate(DeleteEdgeDeploymentStageResponse * const q);

    void parseDeleteEdgeDeploymentStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(DeleteEdgeDeploymentStageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
