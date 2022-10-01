// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLMANAGERRULEGROUPSREQUEST_P_H
#define QTAWS_DELETEFIREWALLMANAGERRULEGROUPSREQUEST_P_H

#include "wafv2request_p.h"
#include "deletefirewallmanagerrulegroupsrequest.h"

namespace QtAws {
namespace Wafv2 {

class DeleteFirewallManagerRuleGroupsRequest;

class DeleteFirewallManagerRuleGroupsRequestPrivate : public Wafv2RequestPrivate {

public:
    DeleteFirewallManagerRuleGroupsRequestPrivate(const Wafv2Request::Action action,
                                   DeleteFirewallManagerRuleGroupsRequest * const q);
    DeleteFirewallManagerRuleGroupsRequestPrivate(const DeleteFirewallManagerRuleGroupsRequestPrivate &other,
                                   DeleteFirewallManagerRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallManagerRuleGroupsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
