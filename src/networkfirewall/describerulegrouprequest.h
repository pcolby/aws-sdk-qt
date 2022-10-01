// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPREQUEST_H
#define QTAWS_DESCRIBERULEGROUPREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeRuleGroupRequest : public NetworkFirewallRequest {

public:
    DescribeRuleGroupRequest(const DescribeRuleGroupRequest &other);
    DescribeRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuleGroupRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
