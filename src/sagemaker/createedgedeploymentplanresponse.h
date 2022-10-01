/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
