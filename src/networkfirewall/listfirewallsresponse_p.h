// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLSRESPONSE_P_H
#define QTAWS_LISTFIREWALLSRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallsResponse;

class ListFirewallsResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit ListFirewallsResponsePrivate(ListFirewallsResponse * const q);

    void parseListFirewallsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallsResponse)
    Q_DISABLE_COPY(ListFirewallsResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
