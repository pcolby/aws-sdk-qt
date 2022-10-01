// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDELETEPROTECTIONRESPONSE_H
#define QTAWS_UPDATEFIREWALLDELETEPROTECTIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "updatefirewalldeleteprotectionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDeleteProtectionResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallDeleteProtectionResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateFirewallDeleteProtectionResponse(const UpdateFirewallDeleteProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallDeleteProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallDeleteProtectionResponse)
    Q_DISABLE_COPY(UpdateFirewallDeleteProtectionResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
