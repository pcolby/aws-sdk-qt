// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLMANAGERRULEGROUPSRESPONSE_P_H
#define QTAWS_DELETEFIREWALLMANAGERRULEGROUPSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class DeleteFirewallManagerRuleGroupsResponse;

class DeleteFirewallManagerRuleGroupsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit DeleteFirewallManagerRuleGroupsResponsePrivate(DeleteFirewallManagerRuleGroupsResponse * const q);

    void parseDeleteFirewallManagerRuleGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallManagerRuleGroupsResponse)
    Q_DISABLE_COPY(DeleteFirewallManagerRuleGroupsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
