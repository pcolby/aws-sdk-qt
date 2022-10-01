// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDELETEPROTECTIONREQUEST_P_H
#define QTAWS_UPDATEFIREWALLDELETEPROTECTIONREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "updatefirewalldeleteprotectionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDeleteProtectionRequest;

class UpdateFirewallDeleteProtectionRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    UpdateFirewallDeleteProtectionRequestPrivate(const NetworkFirewallRequest::Action action,
                                   UpdateFirewallDeleteProtectionRequest * const q);
    UpdateFirewallDeleteProtectionRequestPrivate(const UpdateFirewallDeleteProtectionRequestPrivate &other,
                                   UpdateFirewallDeleteProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallDeleteProtectionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
