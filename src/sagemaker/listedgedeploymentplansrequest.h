// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEDEPLOYMENTPLANSREQUEST_H
#define QTAWS_LISTEDGEDEPLOYMENTPLANSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEdgeDeploymentPlansRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListEdgeDeploymentPlansRequest : public SageMakerRequest {

public:
    ListEdgeDeploymentPlansRequest(const ListEdgeDeploymentPlansRequest &other);
    ListEdgeDeploymentPlansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEdgeDeploymentPlansRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
