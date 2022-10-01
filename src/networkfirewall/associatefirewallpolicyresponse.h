// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLPOLICYRESPONSE_H
#define QTAWS_ASSOCIATEFIREWALLPOLICYRESPONSE_H

#include "networkfirewallresponse.h"
#include "associatefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateFirewallPolicyResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT AssociateFirewallPolicyResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    AssociateFirewallPolicyResponse(const AssociateFirewallPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateFirewallPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFirewallPolicyResponse)
    Q_DISABLE_COPY(AssociateFirewallPolicyResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
