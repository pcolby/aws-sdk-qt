// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTINGCONTROLREQUEST_P_H
#define QTAWS_DELETEROUTINGCONTROLREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "deleteroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteRoutingControlRequest;

class DeleteRoutingControlRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    DeleteRoutingControlRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   DeleteRoutingControlRequest * const q);
    DeleteRoutingControlRequestPrivate(const DeleteRoutingControlRequestPrivate &other,
                                   DeleteRoutingControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoutingControlRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
