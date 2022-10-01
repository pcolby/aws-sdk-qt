// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLPOLICYREQUEST_H
#define QTAWS_ASSOCIATEFIREWALLPOLICYREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateFirewallPolicyRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT AssociateFirewallPolicyRequest : public NetworkFirewallRequest {

public:
    AssociateFirewallPolicyRequest(const AssociateFirewallPolicyRequest &other);
    AssociateFirewallPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
