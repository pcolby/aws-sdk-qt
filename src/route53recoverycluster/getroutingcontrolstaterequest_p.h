// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTINGCONTROLSTATEREQUEST_P_H
#define QTAWS_GETROUTINGCONTROLSTATEREQUEST_P_H

#include "route53recoveryclusterrequest_p.h"
#include "getroutingcontrolstaterequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class GetRoutingControlStateRequest;

class GetRoutingControlStateRequestPrivate : public Route53RecoveryClusterRequestPrivate {

public:
    GetRoutingControlStateRequestPrivate(const Route53RecoveryClusterRequest::Action action,
                                   GetRoutingControlStateRequest * const q);
    GetRoutingControlStateRequestPrivate(const GetRoutingControlStateRequestPrivate &other,
                                   GetRoutingControlStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRoutingControlStateRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
