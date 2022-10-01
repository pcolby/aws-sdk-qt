// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONREQUEST_P_H
#define QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "updatefirewallpolicychangeprotectionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyChangeProtectionRequest;

class UpdateFirewallPolicyChangeProtectionRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    UpdateFirewallPolicyChangeProtectionRequestPrivate(const NetworkFirewallRequest::Action action,
                                   UpdateFirewallPolicyChangeProtectionRequest * const q);
    UpdateFirewallPolicyChangeProtectionRequestPrivate(const UpdateFirewallPolicyChangeProtectionRequestPrivate &other,
                                   UpdateFirewallPolicyChangeProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallPolicyChangeProtectionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
