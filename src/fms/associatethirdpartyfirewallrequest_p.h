// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETHIRDPARTYFIREWALLREQUEST_P_H
#define QTAWS_ASSOCIATETHIRDPARTYFIREWALLREQUEST_P_H

#include "fmsrequest_p.h"
#include "associatethirdpartyfirewallrequest.h"

namespace QtAws {
namespace Fms {

class AssociateThirdPartyFirewallRequest;

class AssociateThirdPartyFirewallRequestPrivate : public FmsRequestPrivate {

public:
    AssociateThirdPartyFirewallRequestPrivate(const FmsRequest::Action action,
                                   AssociateThirdPartyFirewallRequest * const q);
    AssociateThirdPartyFirewallRequestPrivate(const AssociateThirdPartyFirewallRequestPrivate &other,
                                   AssociateThirdPartyFirewallRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateThirdPartyFirewallRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
