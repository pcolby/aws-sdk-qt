// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATESREQUEST_P_H
#define QTAWS_UPDATEROUTINGCONTROLSTATESREQUEST_P_H

#include "route53recoveryclusterrequest_p.h"
#include "updateroutingcontrolstatesrequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStatesRequest;

class UpdateRoutingControlStatesRequestPrivate : public Route53RecoveryClusterRequestPrivate {

public:
    UpdateRoutingControlStatesRequestPrivate(const Route53RecoveryClusterRequest::Action action,
                                   UpdateRoutingControlStatesRequest * const q);
    UpdateRoutingControlStatesRequestPrivate(const UpdateRoutingControlStatesRequestPrivate &other,
                                   UpdateRoutingControlStatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingControlStatesRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
