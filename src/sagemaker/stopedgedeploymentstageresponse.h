// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEDEPLOYMENTSTAGERESPONSE_H
#define QTAWS_STOPEDGEDEPLOYMENTSTAGERESPONSE_H

#include "sagemakerresponse.h"
#include "stopedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class StopEdgeDeploymentStageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopEdgeDeploymentStageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopEdgeDeploymentStageResponse(const StopEdgeDeploymentStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopEdgeDeploymentStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(StopEdgeDeploymentStageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
