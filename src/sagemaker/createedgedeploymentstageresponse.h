// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEDEPLOYMENTSTAGERESPONSE_H
#define QTAWS_CREATEEDGEDEPLOYMENTSTAGERESPONSE_H

#include "sagemakerresponse.h"
#include "createedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgeDeploymentStageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateEdgeDeploymentStageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateEdgeDeploymentStageResponse(const CreateEdgeDeploymentStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEdgeDeploymentStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(CreateEdgeDeploymentStageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
