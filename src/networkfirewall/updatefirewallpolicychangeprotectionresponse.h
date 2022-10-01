// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONRESPONSE_H
#define QTAWS_UPDATEFIREWALLPOLICYCHANGEPROTECTIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "updatefirewallpolicychangeprotectionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyChangeProtectionResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallPolicyChangeProtectionResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateFirewallPolicyChangeProtectionResponse(const UpdateFirewallPolicyChangeProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallPolicyChangeProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallPolicyChangeProtectionResponse)
    Q_DISABLE_COPY(UpdateFirewallPolicyChangeProtectionResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
