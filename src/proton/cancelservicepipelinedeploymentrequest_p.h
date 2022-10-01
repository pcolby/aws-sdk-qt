// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTREQUEST_P_H
#define QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTREQUEST_P_H

#include "protonrequest_p.h"
#include "cancelservicepipelinedeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelServicePipelineDeploymentRequest;

class CancelServicePipelineDeploymentRequestPrivate : public ProtonRequestPrivate {

public:
    CancelServicePipelineDeploymentRequestPrivate(const ProtonRequest::Action action,
                                   CancelServicePipelineDeploymentRequest * const q);
    CancelServicePipelineDeploymentRequestPrivate(const CancelServicePipelineDeploymentRequestPrivate &other,
                                   CancelServicePipelineDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelServicePipelineDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
