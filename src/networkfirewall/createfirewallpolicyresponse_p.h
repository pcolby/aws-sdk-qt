// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLPOLICYRESPONSE_P_H
#define QTAWS_CREATEFIREWALLPOLICYRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallPolicyResponse;

class CreateFirewallPolicyResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit CreateFirewallPolicyResponsePrivate(CreateFirewallPolicyResponse * const q);

    void parseCreateFirewallPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFirewallPolicyResponse)
    Q_DISABLE_COPY(CreateFirewallPolicyResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
