// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLPOLICYREQUEST_P_H
#define QTAWS_CREATEFIREWALLPOLICYREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "createfirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallPolicyRequest;

class CreateFirewallPolicyRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    CreateFirewallPolicyRequestPrivate(const NetworkFirewallRequest::Action action,
                                   CreateFirewallPolicyRequest * const q);
    CreateFirewallPolicyRequestPrivate(const CreateFirewallPolicyRequestPrivate &other,
                                   CreateFirewallPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
