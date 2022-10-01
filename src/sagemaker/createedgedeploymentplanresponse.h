// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEDEPLOYMENTPLANRESPONSE_H
#define QTAWS_CREATEEDGEDEPLOYMENTPLANRESPONSE_H

#include "sagemakerresponse.h"
#include "createedgedeploymentplanrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgeDeploymentPlanResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateEdgeDeploymentPlanResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateEdgeDeploymentPlanResponse(const CreateEdgeDeploymentPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEdgeDeploymentPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEdgeDeploymentPlanResponse)
    Q_DISABLE_COPY(CreateEdgeDeploymentPlanResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
