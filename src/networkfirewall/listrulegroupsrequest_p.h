// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSREQUEST_P_H
#define QTAWS_LISTRULEGROUPSREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "listrulegroupsrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class ListRuleGroupsRequest;

class ListRuleGroupsRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    ListRuleGroupsRequestPrivate(const NetworkFirewallRequest::Action action,
                                   ListRuleGroupsRequest * const q);
    ListRuleGroupsRequestPrivate(const ListRuleGroupsRequestPrivate &other,
                                   ListRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRuleGroupsRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
