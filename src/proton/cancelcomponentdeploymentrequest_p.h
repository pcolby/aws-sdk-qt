// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMPONENTDEPLOYMENTREQUEST_P_H
#define QTAWS_CANCELCOMPONENTDEPLOYMENTREQUEST_P_H

#include "protonrequest_p.h"
#include "cancelcomponentdeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelComponentDeploymentRequest;

class CancelComponentDeploymentRequestPrivate : public ProtonRequestPrivate {

public:
    CancelComponentDeploymentRequestPrivate(const ProtonRequest::Action action,
                                   CancelComponentDeploymentRequest * const q);
    CancelComponentDeploymentRequestPrivate(const CancelComponentDeploymentRequestPrivate &other,
                                   CancelComponentDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelComponentDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
