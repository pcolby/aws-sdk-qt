// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLPOLICYRESPONSE_P_H
#define QTAWS_DELETEFIREWALLPOLICYRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteFirewallPolicyResponse;

class DeleteFirewallPolicyResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DeleteFirewallPolicyResponsePrivate(DeleteFirewallPolicyResponse * const q);

    void parseDeleteFirewallPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallPolicyResponse)
    Q_DISABLE_COPY(DeleteFirewallPolicyResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
