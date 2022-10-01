// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDELETEPROTECTIONREQUEST_H
#define QTAWS_UPDATEFIREWALLDELETEPROTECTIONREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDeleteProtectionRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallDeleteProtectionRequest : public NetworkFirewallRequest {

public:
    UpdateFirewallDeleteProtectionRequest(const UpdateFirewallDeleteProtectionRequest &other);
    UpdateFirewallDeleteProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallDeleteProtectionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
