// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "describeclusterrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeClusterRequest;

class DescribeClusterRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    DescribeClusterRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   DescribeClusterRequest * const q);
    DescribeClusterRequestPrivate(const DescribeClusterRequestPrivate &other,
                                   DescribeClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
