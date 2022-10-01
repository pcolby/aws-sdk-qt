// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLSREQUEST_P_H
#define QTAWS_LISTFIREWALLSREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "listfirewallsrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallsRequest;

class ListFirewallsRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    ListFirewallsRequestPrivate(const NetworkFirewallRequest::Action action,
                                   ListFirewallsRequest * const q);
    ListFirewallsRequestPrivate(const ListFirewallsRequestPrivate &other,
                                   ListFirewallsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallsRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
