// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLPOLICIESRESPONSE_H
#define QTAWS_LISTFIREWALLPOLICIESRESPONSE_H

#include "networkfirewallresponse.h"
#include "listfirewallpoliciesrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallPoliciesResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT ListFirewallPoliciesResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    ListFirewallPoliciesResponse(const ListFirewallPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFirewallPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallPoliciesResponse)
    Q_DISABLE_COPY(ListFirewallPoliciesResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
