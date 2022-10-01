// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSREQUEST_P_H
#define QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSREQUEST_P_H

#include "fmsrequest_p.h"
#include "getthirdpartyfirewallassociationstatusrequest.h"

namespace QtAws {
namespace Fms {

class GetThirdPartyFirewallAssociationStatusRequest;

class GetThirdPartyFirewallAssociationStatusRequestPrivate : public FmsRequestPrivate {

public:
    GetThirdPartyFirewallAssociationStatusRequestPrivate(const FmsRequest::Action action,
                                   GetThirdPartyFirewallAssociationStatusRequest * const q);
    GetThirdPartyFirewallAssociationStatusRequestPrivate(const GetThirdPartyFirewallAssociationStatusRequestPrivate &other,
                                   GetThirdPartyFirewallAssociationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetThirdPartyFirewallAssociationStatusRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
