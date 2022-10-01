// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyChangeProtectionResponse;

class UpdateFirewallPolicyChangeProtectionResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit UpdateFirewallPolicyChangeProtectionResponsePrivate(UpdateFirewallPolicyChangeProtectionResponse * const q);

    void parseUpdateFirewallPolicyChangeProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallPolicyChangeProtectionResponse)
    Q_DISABLE_COPY(UpdateFirewallPolicyChangeProtectionResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
