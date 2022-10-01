// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTREQUEST_P_H
#define QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTREQUEST_P_H

#include "protonrequest_p.h"
#include "cancelserviceinstancedeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelServiceInstanceDeploymentRequest;

class CancelServiceInstanceDeploymentRequestPrivate : public ProtonRequestPrivate {

public:
    CancelServiceInstanceDeploymentRequestPrivate(const ProtonRequest::Action action,
                                   CancelServiceInstanceDeploymentRequest * const q);
    CancelServiceInstanceDeploymentRequestPrivate(const CancelServiceInstanceDeploymentRequestPrivate &other,
                                   CancelServiceInstanceDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelServiceInstanceDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
