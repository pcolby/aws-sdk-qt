// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLPOLICYRESPONSE_H
#define QTAWS_UPDATEFIREWALLPOLICYRESPONSE_H

#include "networkfirewallresponse.h"
#include "updatefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallPolicyResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallPolicyResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateFirewallPolicyResponse(const UpdateFirewallPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallPolicyResponse)
    Q_DISABLE_COPY(UpdateFirewallPolicyResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
