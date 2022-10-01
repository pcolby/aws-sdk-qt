// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESUBNETSREQUEST_P_H
#define QTAWS_DISASSOCIATESUBNETSREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "disassociatesubnetsrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DisassociateSubnetsRequest;

class DisassociateSubnetsRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DisassociateSubnetsRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DisassociateSubnetsRequest * const q);
    DisassociateSubnetsRequestPrivate(const DisassociateSubnetsRequestPrivate &other,
                                   DisassociateSubnetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateSubnetsRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
