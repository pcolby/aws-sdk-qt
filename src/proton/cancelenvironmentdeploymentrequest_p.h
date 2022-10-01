// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELENVIRONMENTDEPLOYMENTREQUEST_P_H
#define QTAWS_CANCELENVIRONMENTDEPLOYMENTREQUEST_P_H

#include "protonrequest_p.h"
#include "cancelenvironmentdeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelEnvironmentDeploymentRequest;

class CancelEnvironmentDeploymentRequestPrivate : public ProtonRequestPrivate {

public:
    CancelEnvironmentDeploymentRequestPrivate(const ProtonRequest::Action action,
                                   CancelEnvironmentDeploymentRequest * const q);
    CancelEnvironmentDeploymentRequestPrivate(const CancelEnvironmentDeploymentRequestPrivate &other,
                                   CancelEnvironmentDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelEnvironmentDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
