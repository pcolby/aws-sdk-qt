// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGEREQUEST_P_H
#define QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGEREQUEST_P_H

#include "protonrequest_p.h"
#include "notifyresourcedeploymentstatuschangerequest.h"

namespace QtAws {
namespace Proton {

class NotifyResourceDeploymentStatusChangeRequest;

class NotifyResourceDeploymentStatusChangeRequestPrivate : public ProtonRequestPrivate {

public:
    NotifyResourceDeploymentStatusChangeRequestPrivate(const ProtonRequest::Action action,
                                   NotifyResourceDeploymentStatusChangeRequest * const q);
    NotifyResourceDeploymentStatusChangeRequestPrivate(const NotifyResourceDeploymentStatusChangeRequestPrivate &other,
                                   NotifyResourceDeploymentStatusChangeRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyResourceDeploymentStatusChangeRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
