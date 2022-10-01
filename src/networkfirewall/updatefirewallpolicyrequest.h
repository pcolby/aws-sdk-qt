// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYREQUEST_H
#define QTAWS_UPDATEFIREWALLPOLICYREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallPolicyRequest : public NetworkFirewallRequest {

public:
    UpdateFirewallPolicyRequest(const UpdateFirewallPolicyRequest &other);
    UpdateFirewallPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
