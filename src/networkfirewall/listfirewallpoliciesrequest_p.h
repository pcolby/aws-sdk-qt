// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLPOLICIESREQUEST_P_H
#define QTAWS_LISTFIREWALLPOLICIESREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "listfirewallpoliciesrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallPoliciesRequest;

class ListFirewallPoliciesRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    ListFirewallPoliciesRequestPrivate(const NetworkFirewallRequest::Action action,
                                   ListFirewallPoliciesRequest * const q);
    ListFirewallPoliciesRequestPrivate(const ListFirewallPoliciesRequestPrivate &other,
                                   ListFirewallPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallPoliciesRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
