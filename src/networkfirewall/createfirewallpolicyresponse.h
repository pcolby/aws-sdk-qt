// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLPOLICYRESPONSE_H
#define QTAWS_CREATEFIREWALLPOLICYRESPONSE_H

#include "networkfirewallresponse.h"
#include "createfirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallPolicyResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT CreateFirewallPolicyResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    CreateFirewallPolicyResponse(const CreateFirewallPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFirewallPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallPolicyResponse)
    Q_DISABLE_COPY(CreateFirewallPolicyResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
