// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPMETADATARESPONSE_P_H
#define QTAWS_DESCRIBERULEGROUPMETADATARESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupMetadataResponse;

class DescribeRuleGroupMetadataResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DescribeRuleGroupMetadataResponsePrivate(DescribeRuleGroupMetadataResponse * const q);

    void parseDescribeRuleGroupMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRuleGroupMetadataResponse)
    Q_DISABLE_COPY(DescribeRuleGroupMetadataResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
