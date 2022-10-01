// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESREQUEST_P_H
#define QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESREQUEST_P_H

#include "ec2request_p.h"
#include "describeclientvpnauthorizationrulesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnAuthorizationRulesRequest;

class DescribeClientVpnAuthorizationRulesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeClientVpnAuthorizationRulesRequestPrivate(const Ec2Request::Action action,
                                   DescribeClientVpnAuthorizationRulesRequest * const q);
    DescribeClientVpnAuthorizationRulesRequestPrivate(const DescribeClientVpnAuthorizationRulesRequestPrivate &other,
                                   DescribeClientVpnAuthorizationRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnAuthorizationRulesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
