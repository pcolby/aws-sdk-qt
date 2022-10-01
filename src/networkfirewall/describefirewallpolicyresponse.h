// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLPOLICYRESPONSE_H
#define QTAWS_DESCRIBEFIREWALLPOLICYRESPONSE_H

#include "networkfirewallresponse.h"
#include "describefirewallpolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallPolicyResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeFirewallPolicyResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DescribeFirewallPolicyResponse(const DescribeFirewallPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFirewallPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFirewallPolicyResponse)
    Q_DISABLE_COPY(DescribeFirewallPolicyResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
