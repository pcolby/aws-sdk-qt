// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEDGEDEPLOYMENTSTAGERESPONSE_H
#define QTAWS_STARTEDGEDEPLOYMENTSTAGERESPONSE_H

#include "sagemakerresponse.h"
#include "startedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class StartEdgeDeploymentStageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StartEdgeDeploymentStageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StartEdgeDeploymentStageResponse(const StartEdgeDeploymentStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartEdgeDeploymentStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(StartEdgeDeploymentStageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
