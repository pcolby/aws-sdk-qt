// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGCONTROLSREQUEST_P_H
#define QTAWS_LISTROUTINGCONTROLSREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "listroutingcontrolsrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListRoutingControlsRequest;

class ListRoutingControlsRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    ListRoutingControlsRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   ListRoutingControlsRequest * const q);
    ListRoutingControlsRequestPrivate(const ListRoutingControlsRequestPrivate &other,
                                   ListRoutingControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoutingControlsRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
