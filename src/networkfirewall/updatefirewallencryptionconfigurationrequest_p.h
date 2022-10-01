// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "updatefirewallencryptionconfigurationrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallEncryptionConfigurationRequest;

class UpdateFirewallEncryptionConfigurationRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    UpdateFirewallEncryptionConfigurationRequestPrivate(const NetworkFirewallRequest::Action action,
                                   UpdateFirewallEncryptionConfigurationRequest * const q);
    UpdateFirewallEncryptionConfigurationRequestPrivate(const UpdateFirewallEncryptionConfigurationRequestPrivate &other,
                                   UpdateFirewallEncryptionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallEncryptionConfigurationRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
