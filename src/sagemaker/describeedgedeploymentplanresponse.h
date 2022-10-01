// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEDGEDEPLOYMENTPLANRESPONSE_H
#define QTAWS_DESCRIBEEDGEDEPLOYMENTPLANRESPONSE_H

#include "sagemakerresponse.h"
#include "describeedgedeploymentplanrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEdgeDeploymentPlanResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeEdgeDeploymentPlanResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeEdgeDeploymentPlanResponse(const DescribeEdgeDeploymentPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEdgeDeploymentPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEdgeDeploymentPlanResponse)
    Q_DISABLE_COPY(DescribeEdgeDeploymentPlanResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
