// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTROLPANELREQUEST_P_H
#define QTAWS_DESCRIBECONTROLPANELREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "describecontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeControlPanelRequest;

class DescribeControlPanelRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    DescribeControlPanelRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   DescribeControlPanelRequest * const q);
    DescribeControlPanelRequestPrivate(const DescribeControlPanelRequestPrivate &other,
                                   DescribeControlPanelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeControlPanelRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
