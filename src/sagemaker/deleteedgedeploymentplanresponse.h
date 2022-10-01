// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTPLANRESPONSE_H
#define QTAWS_DELETEEDGEDEPLOYMENTPLANRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteedgedeploymentplanrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentPlanResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteEdgeDeploymentPlanResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteEdgeDeploymentPlanResponse(const DeleteEdgeDeploymentPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEdgeDeploymentPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEdgeDeploymentPlanResponse)
    Q_DISABLE_COPY(DeleteEdgeDeploymentPlanResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
