// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLPOLICYREQUEST_P_H
#define QTAWS_DESCRIBEFIREWALLPOLICYREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "describefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallPolicyRequest;

class DescribeFirewallPolicyRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DescribeFirewallPolicyRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DescribeFirewallPolicyRequest * const q);
    DescribeFirewallPolicyRequestPrivate(const DescribeFirewallPolicyRequestPrivate &other,
                                   DescribeFirewallPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
