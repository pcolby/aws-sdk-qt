// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETHIRDPARTYFIREWALLRESPONSE_P_H
#define QTAWS_ASSOCIATETHIRDPARTYFIREWALLRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class AssociateThirdPartyFirewallResponse;

class AssociateThirdPartyFirewallResponsePrivate : public FmsResponsePrivate {

public:

    explicit AssociateThirdPartyFirewallResponsePrivate(AssociateThirdPartyFirewallResponse * const q);

    void parseAssociateThirdPartyFirewallResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateThirdPartyFirewallResponse)
    Q_DISABLE_COPY(AssociateThirdPartyFirewallResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
