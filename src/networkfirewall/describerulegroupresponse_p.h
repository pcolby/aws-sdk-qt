// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPRESPONSE_P_H
#define QTAWS_DESCRIBERULEGROUPRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupResponse;

class DescribeRuleGroupResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DescribeRuleGroupResponsePrivate(DescribeRuleGroupResponse * const q);

    void parseDescribeRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRuleGroupResponse)
    Q_DISABLE_COPY(DescribeRuleGroupResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
