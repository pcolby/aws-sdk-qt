// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLPOLICIESREQUEST_H
#define QTAWS_LISTFIREWALLPOLICIESREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallPoliciesRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT ListFirewallPoliciesRequest : public NetworkFirewallRequest {

public:
    ListFirewallPoliciesRequest(const ListFirewallPoliciesRequest &other);
    ListFirewallPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallPoliciesRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
