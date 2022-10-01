// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPRESPONSE_H
#define QTAWS_DESCRIBERULEGROUPRESPONSE_H

#include "networkfirewallresponse.h"
#include "describerulegrouprequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeRuleGroupResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DescribeRuleGroupResponse(const DescribeRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuleGroupResponse)
    Q_DISABLE_COPY(DescribeRuleGroupResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
