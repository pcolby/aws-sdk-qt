// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLPOLICYREQUEST_P_H
#define QTAWS_DELETEFIREWALLPOLICYREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "deletefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteFirewallPolicyRequest;

class DeleteFirewallPolicyRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DeleteFirewallPolicyRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DeleteFirewallPolicyRequest * const q);
    DeleteFirewallPolicyRequestPrivate(const DeleteFirewallPolicyRequestPrivate &other,
                                   DeleteFirewallPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
