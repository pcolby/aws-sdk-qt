// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHIRDPARTYFIREWALLFIREWALLPOLICIESREQUEST_P_H
#define QTAWS_LISTTHIRDPARTYFIREWALLFIREWALLPOLICIESREQUEST_P_H

#include "fmsrequest_p.h"
#include "listthirdpartyfirewallfirewallpoliciesrequest.h"

namespace QtAws {
namespace Fms {

class ListThirdPartyFirewallFirewallPoliciesRequest;

class ListThirdPartyFirewallFirewallPoliciesRequestPrivate : public FmsRequestPrivate {

public:
    ListThirdPartyFirewallFirewallPoliciesRequestPrivate(const FmsRequest::Action action,
                                   ListThirdPartyFirewallFirewallPoliciesRequest * const q);
    ListThirdPartyFirewallFirewallPoliciesRequestPrivate(const ListThirdPartyFirewallFirewallPoliciesRequestPrivate &other,
                                   ListThirdPartyFirewallFirewallPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThirdPartyFirewallFirewallPoliciesRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
