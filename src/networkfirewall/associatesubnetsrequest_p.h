// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETSREQUEST_P_H
#define QTAWS_ASSOCIATESUBNETSREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "associatesubnetsrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateSubnetsRequest;

class AssociateSubnetsRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    AssociateSubnetsRequestPrivate(const NetworkFirewallRequest::Action action,
                                   AssociateSubnetsRequest * const q);
    AssociateSubnetsRequestPrivate(const AssociateSubnetsRequestPrivate &other,
                                   AssociateSubnetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSubnetsRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
