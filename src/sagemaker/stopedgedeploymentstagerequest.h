// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEDEPLOYMENTSTAGEREQUEST_H
#define QTAWS_STOPEDGEDEPLOYMENTSTAGEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopEdgeDeploymentStageRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopEdgeDeploymentStageRequest : public SageMakerRequest {

public:
    StopEdgeDeploymentStageRequest(const StopEdgeDeploymentStageRequest &other);
    StopEdgeDeploymentStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEdgeDeploymentStageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
