// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDESCRIPTIONREQUEST_P_H
#define QTAWS_UPDATEFIREWALLDESCRIPTIONREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "updatefirewalldescriptionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDescriptionRequest;

class UpdateFirewallDescriptionRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    UpdateFirewallDescriptionRequestPrivate(const NetworkFirewallRequest::Action action,
                                   UpdateFirewallDescriptionRequest * const q);
    UpdateFirewallDescriptionRequestPrivate(const UpdateFirewallDescriptionRequestPrivate &other,
                                   UpdateFirewallDescriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallDescriptionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
