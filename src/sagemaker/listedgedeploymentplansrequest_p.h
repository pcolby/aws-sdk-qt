// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEDEPLOYMENTPLANSREQUEST_P_H
#define QTAWS_LISTEDGEDEPLOYMENTPLANSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listedgedeploymentplansrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEdgeDeploymentPlansRequest;

class ListEdgeDeploymentPlansRequestPrivate : public SageMakerRequestPrivate {

public:
    ListEdgeDeploymentPlansRequestPrivate(const SageMakerRequest::Action action,
                                   ListEdgeDeploymentPlansRequest * const q);
    ListEdgeDeploymentPlansRequestPrivate(const ListEdgeDeploymentPlansRequestPrivate &other,
                                   ListEdgeDeploymentPlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEdgeDeploymentPlansRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
