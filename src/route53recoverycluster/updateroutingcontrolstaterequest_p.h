// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATEREQUEST_P_H
#define QTAWS_UPDATEROUTINGCONTROLSTATEREQUEST_P_H

#include "route53recoveryclusterrequest_p.h"
#include "updateroutingcontrolstaterequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStateRequest;

class UpdateRoutingControlStateRequestPrivate : public Route53RecoveryClusterRequestPrivate {

public:
    UpdateRoutingControlStateRequestPrivate(const Route53RecoveryClusterRequest::Action action,
                                   UpdateRoutingControlStateRequest * const q);
    UpdateRoutingControlStateRequestPrivate(const UpdateRoutingControlStateRequestPrivate &other,
                                   UpdateRoutingControlStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingControlStateRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
