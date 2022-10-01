// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLSREQUEST_H
#define QTAWS_LISTFIREWALLSREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallsRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT ListFirewallsRequest : public NetworkFirewallRequest {

public:
    ListFirewallsRequest(const ListFirewallsRequest &other);
    ListFirewallsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallsRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
