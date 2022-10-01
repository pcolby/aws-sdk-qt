// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTPLANRESPONSE_P_H
#define QTAWS_DELETEEDGEDEPLOYMENTPLANRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentPlanResponse;

class DeleteEdgeDeploymentPlanResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteEdgeDeploymentPlanResponsePrivate(DeleteEdgeDeploymentPlanResponse * const q);

    void parseDeleteEdgeDeploymentPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEdgeDeploymentPlanResponse)
    Q_DISABLE_COPY(DeleteEdgeDeploymentPlanResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
