// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETHIRDPARTYFIREWALLREQUEST_P_H
#define QTAWS_DISASSOCIATETHIRDPARTYFIREWALLREQUEST_P_H

#include "fmsrequest_p.h"
#include "disassociatethirdpartyfirewallrequest.h"

namespace QtAws {
namespace Fms {

class DisassociateThirdPartyFirewallRequest;

class DisassociateThirdPartyFirewallRequestPrivate : public FmsRequestPrivate {

public:
    DisassociateThirdPartyFirewallRequestPrivate(const FmsRequest::Action action,
                                   DisassociateThirdPartyFirewallRequest * const q);
    DisassociateThirdPartyFirewallRequestPrivate(const DisassociateThirdPartyFirewallRequestPrivate &other,
                                   DisassociateThirdPartyFirewallRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateThirdPartyFirewallRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
