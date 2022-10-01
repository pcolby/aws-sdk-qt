// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLPOLICIESRESPONSE_P_H
#define QTAWS_LISTFIREWALLPOLICIESRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallPoliciesResponse;

class ListFirewallPoliciesResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit ListFirewallPoliciesResponsePrivate(ListFirewallPoliciesResponse * const q);

    void parseListFirewallPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallPoliciesResponse)
    Q_DISABLE_COPY(ListFirewallPoliciesResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
