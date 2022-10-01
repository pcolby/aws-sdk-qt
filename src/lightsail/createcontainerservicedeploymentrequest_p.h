// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEDEPLOYMENTREQUEST_P_H
#define QTAWS_CREATECONTAINERSERVICEDEPLOYMENTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createcontainerservicedeploymentrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceDeploymentRequest;

class CreateContainerServiceDeploymentRequestPrivate : public LightsailRequestPrivate {

public:
    CreateContainerServiceDeploymentRequestPrivate(const LightsailRequest::Action action,
                                   CreateContainerServiceDeploymentRequest * const q);
    CreateContainerServiceDeploymentRequestPrivate(const CreateContainerServiceDeploymentRequestPrivate &other,
                                   CreateContainerServiceDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContainerServiceDeploymentRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
