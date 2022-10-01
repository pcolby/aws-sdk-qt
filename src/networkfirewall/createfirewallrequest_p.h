// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLREQUEST_P_H
#define QTAWS_CREATEFIREWALLREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "createfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallRequest;

class CreateFirewallRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    CreateFirewallRequestPrivate(const NetworkFirewallRequest::Action action,
                                   CreateFirewallRequest * const q);
    CreateFirewallRequestPrivate(const CreateFirewallRequestPrivate &other,
                                   CreateFirewallRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFirewallRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
