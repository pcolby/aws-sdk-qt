// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYREQUEST_P_H
#define QTAWS_UPDATEFIREWALLPOLICYREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "updatefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyRequest;

class UpdateFirewallPolicyRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    UpdateFirewallPolicyRequestPrivate(const NetworkFirewallRequest::Action action,
                                   UpdateFirewallPolicyRequest * const q);
    UpdateFirewallPolicyRequestPrivate(const UpdateFirewallPolicyRequestPrivate &other,
                                   UpdateFirewallPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
