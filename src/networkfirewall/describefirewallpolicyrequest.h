// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLPOLICYREQUEST_H
#define QTAWS_DESCRIBEFIREWALLPOLICYREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallPolicyRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeFirewallPolicyRequest : public NetworkFirewallRequest {

public:
    DescribeFirewallPolicyRequest(const DescribeFirewallPolicyRequest &other);
    DescribeFirewallPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFirewallPolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
