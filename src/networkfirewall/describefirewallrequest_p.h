// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLREQUEST_P_H
#define QTAWS_DESCRIBEFIREWALLREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "describefirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallRequest;

class DescribeFirewallRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DescribeFirewallRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DescribeFirewallRequest * const q);
    DescribeFirewallRequestPrivate(const DescribeFirewallRequestPrivate &other,
                                   DescribeFirewallRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFirewallRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
