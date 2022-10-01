// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETHIRDPARTYFIREWALLRESPONSE_P_H
#define QTAWS_DISASSOCIATETHIRDPARTYFIREWALLRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class DisassociateThirdPartyFirewallResponse;

class DisassociateThirdPartyFirewallResponsePrivate : public FmsResponsePrivate {

public:

    explicit DisassociateThirdPartyFirewallResponsePrivate(DisassociateThirdPartyFirewallResponse * const q);

    void parseDisassociateThirdPartyFirewallResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateThirdPartyFirewallResponse)
    Q_DISABLE_COPY(DisassociateThirdPartyFirewallResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
