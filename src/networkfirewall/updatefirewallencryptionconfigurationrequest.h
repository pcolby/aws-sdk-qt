// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallEncryptionConfigurationRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallEncryptionConfigurationRequest : public NetworkFirewallRequest {

public:
    UpdateFirewallEncryptionConfigurationRequest(const UpdateFirewallEncryptionConfigurationRequest &other);
    UpdateFirewallEncryptionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallEncryptionConfigurationRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
