// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEDGEDEPLOYMENTSTAGERESPONSE_H
#define QTAWS_DELETEEDGEDEPLOYMENTSTAGERESPONSE_H

#include "sagemakerresponse.h"
#include "deleteedgedeploymentstagerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEdgeDeploymentStageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteEdgeDeploymentStageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteEdgeDeploymentStageResponse(const DeleteEdgeDeploymentStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEdgeDeploymentStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEdgeDeploymentStageResponse)
    Q_DISABLE_COPY(DeleteEdgeDeploymentStageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
