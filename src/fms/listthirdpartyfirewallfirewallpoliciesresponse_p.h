// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHIRDPARTYFIREWALLFIREWALLPOLICIESRESPONSE_P_H
#define QTAWS_LISTTHIRDPARTYFIREWALLFIREWALLPOLICIESRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class ListThirdPartyFirewallFirewallPoliciesResponse;

class ListThirdPartyFirewallFirewallPoliciesResponsePrivate : public FmsResponsePrivate {

public:

    explicit ListThirdPartyFirewallFirewallPoliciesResponsePrivate(ListThirdPartyFirewallFirewallPoliciesResponse * const q);

    void parseListThirdPartyFirewallFirewallPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThirdPartyFirewallFirewallPoliciesResponse)
    Q_DISABLE_COPY(ListThirdPartyFirewallFirewallPoliciesResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
