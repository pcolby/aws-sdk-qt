// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLPOLICYRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyResponse;

class UpdateFirewallPolicyResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit UpdateFirewallPolicyResponsePrivate(UpdateFirewallPolicyResponse * const q);

    void parseUpdateFirewallPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallPolicyResponse)
    Q_DISABLE_COPY(UpdateFirewallPolicyResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
