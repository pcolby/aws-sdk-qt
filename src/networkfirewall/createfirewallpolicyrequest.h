// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLPOLICYREQUEST_H
#define QTAWS_CREATEFIREWALLPOLICYREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallPolicyRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT CreateFirewallPolicyRequest : public NetworkFirewallRequest {

public:
    CreateFirewallPolicyRequest(const CreateFirewallPolicyRequest &other);
    CreateFirewallPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
