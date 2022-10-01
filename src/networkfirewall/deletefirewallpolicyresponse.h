// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLPOLICYRESPONSE_H
#define QTAWS_DELETEFIREWALLPOLICYRESPONSE_H

#include "networkfirewallresponse.h"
#include "deletefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteFirewallPolicyResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DeleteFirewallPolicyResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DeleteFirewallPolicyResponse(const DeleteFirewallPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFirewallPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallPolicyResponse)
    Q_DISABLE_COPY(DeleteFirewallPolicyResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
