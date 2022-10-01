// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBEFIREWALLPOLICYRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallPolicyResponse;

class DescribeFirewallPolicyResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DescribeFirewallPolicyResponsePrivate(DescribeFirewallPolicyResponse * const q);

    void parseDescribeFirewallPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFirewallPolicyResponse)
    Q_DISABLE_COPY(DescribeFirewallPolicyResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
