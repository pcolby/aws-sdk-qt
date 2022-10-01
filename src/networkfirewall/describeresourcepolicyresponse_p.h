// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeResourcePolicyResponse;

class DescribeResourcePolicyResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DescribeResourcePolicyResponsePrivate(DescribeResourcePolicyResponse * const q);

    void parseDescribeResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePolicyResponse)
    Q_DISABLE_COPY(DescribeResourcePolicyResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
