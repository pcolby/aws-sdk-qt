// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLREQUEST_P_H
#define QTAWS_UPDATEROUTINGCONTROLREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "updateroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateRoutingControlRequest;

class UpdateRoutingControlRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    UpdateRoutingControlRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   UpdateRoutingControlRequest * const q);
    UpdateRoutingControlRequestPrivate(const UpdateRoutingControlRequestPrivate &other,
                                   UpdateRoutingControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingControlRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
