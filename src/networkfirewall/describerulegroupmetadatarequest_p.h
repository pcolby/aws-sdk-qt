// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPMETADATAREQUEST_P_H
#define QTAWS_DESCRIBERULEGROUPMETADATAREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "describerulegroupmetadatarequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupMetadataRequest;

class DescribeRuleGroupMetadataRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DescribeRuleGroupMetadataRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DescribeRuleGroupMetadataRequest * const q);
    DescribeRuleGroupMetadataRequestPrivate(const DescribeRuleGroupMetadataRequestPrivate &other,
                                   DescribeRuleGroupMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRuleGroupMetadataRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
