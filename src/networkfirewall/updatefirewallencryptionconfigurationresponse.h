// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEFIREWALLENCRYPTIONCONFIGURATIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "updatefirewallencryptionconfigurationrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallEncryptionConfigurationResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallEncryptionConfigurationResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateFirewallEncryptionConfigurationResponse(const UpdateFirewallEncryptionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallEncryptionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallEncryptionConfigurationResponse)
    Q_DISABLE_COPY(UpdateFirewallEncryptionConfigurationResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
