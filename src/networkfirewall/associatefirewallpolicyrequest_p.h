// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLPOLICYREQUEST_P_H
#define QTAWS_ASSOCIATEFIREWALLPOLICYREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "associatefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateFirewallPolicyRequest;

class AssociateFirewallPolicyRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    AssociateFirewallPolicyRequestPrivate(const NetworkFirewallRequest::Action action,
                                   AssociateFirewallPolicyRequest * const q);
    AssociateFirewallPolicyRequestPrivate(const AssociateFirewallPolicyRequestPrivate &other,
                                   AssociateFirewallPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
