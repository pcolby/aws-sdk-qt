// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLPOLICYREQUEST_H
#define QTAWS_DELETEFIREWALLPOLICYREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteFirewallPolicyRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT DeleteFirewallPolicyRequest : public NetworkFirewallRequest {

public:
    DeleteFirewallPolicyRequest(const DeleteFirewallPolicyRequest &other);
    DeleteFirewallPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
