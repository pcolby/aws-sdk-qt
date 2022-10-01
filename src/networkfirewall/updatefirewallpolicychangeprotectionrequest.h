// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONREQUEST_H
#define QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyChangeProtectionRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallPolicyChangeProtectionRequest : public NetworkFirewallRequest {

public:
    UpdateFirewallPolicyChangeProtectionRequest(const UpdateFirewallPolicyChangeProtectionRequest &other);
    UpdateFirewallPolicyChangeProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallPolicyChangeProtectionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
