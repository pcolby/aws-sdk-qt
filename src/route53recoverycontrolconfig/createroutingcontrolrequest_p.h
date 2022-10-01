// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGCONTROLREQUEST_P_H
#define QTAWS_CREATEROUTINGCONTROLREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "createroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateRoutingControlRequest;

class CreateRoutingControlRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    CreateRoutingControlRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   CreateRoutingControlRequest * const q);
    CreateRoutingControlRequestPrivate(const CreateRoutingControlRequestPrivate &other,
                                   CreateRoutingControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRoutingControlRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
