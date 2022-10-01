// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLREQUEST_P_H
#define QTAWS_DELETEFIREWALLREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "deletefirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteFirewallRequest;

class DeleteFirewallRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DeleteFirewallRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DeleteFirewallRequest * const q);
    DeleteFirewallRequestPrivate(const DeleteFirewallRequestPrivate &other,
                                   DeleteFirewallRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
