// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTINGCONTROLREQUEST_P_H
#define QTAWS_DESCRIBEROUTINGCONTROLREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "describeroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeRoutingControlRequest;

class DescribeRoutingControlRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    DescribeRoutingControlRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   DescribeRoutingControlRequest * const q);
    DescribeRoutingControlRequestPrivate(const DescribeRoutingControlRequestPrivate &other,
                                   DescribeRoutingControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRoutingControlRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
