// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallEncryptionConfigurationResponse;

class UpdateFirewallEncryptionConfigurationResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit UpdateFirewallEncryptionConfigurationResponsePrivate(UpdateFirewallEncryptionConfigurationResponse * const q);

    void parseUpdateFirewallEncryptionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallEncryptionConfigurationResponse)
    Q_DISABLE_COPY(UpdateFirewallEncryptionConfigurationResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
