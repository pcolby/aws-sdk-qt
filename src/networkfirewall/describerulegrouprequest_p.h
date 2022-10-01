// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPREQUEST_P_H
#define QTAWS_DESCRIBERULEGROUPREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "describerulegrouprequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupRequest;

class DescribeRuleGroupRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DescribeRuleGroupRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DescribeRuleGroupRequest * const q);
    DescribeRuleGroupRequestPrivate(const DescribeRuleGroupRequestPrivate &other,
                                   DescribeRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRuleGroupRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
