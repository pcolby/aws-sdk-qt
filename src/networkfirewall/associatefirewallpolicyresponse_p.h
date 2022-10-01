// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLPOLICYRESPONSE_P_H
#define QTAWS_ASSOCIATEFIREWALLPOLICYRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateFirewallPolicyResponse;

class AssociateFirewallPolicyResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit AssociateFirewallPolicyResponsePrivate(AssociateFirewallPolicyResponse * const q);

    void parseAssociateFirewallPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateFirewallPolicyResponse)
    Q_DISABLE_COPY(AssociateFirewallPolicyResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
