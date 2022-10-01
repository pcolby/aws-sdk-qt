// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGCONTROLSREQUEST_P_H
#define QTAWS_LISTROUTINGCONTROLSREQUEST_P_H

#include "route53recoveryclusterrequest_p.h"
#include "listroutingcontrolsrequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class ListRoutingControlsRequest;

class ListRoutingControlsRequestPrivate : public Route53RecoveryClusterRequestPrivate {

public:
    ListRoutingControlsRequestPrivate(const Route53RecoveryClusterRequest::Action action,
                                   ListRoutingControlsRequest * const q);
    ListRoutingControlsRequestPrivate(const ListRoutingControlsRequestPrivate &other,
                                   ListRoutingControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoutingControlsRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
