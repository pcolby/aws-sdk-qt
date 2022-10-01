// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPMETADATAREQUEST_H
#define QTAWS_DESCRIBERULEGROUPMETADATAREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupMetadataRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeRuleGroupMetadataRequest : public NetworkFirewallRequest {

public:
    DescribeRuleGroupMetadataRequest(const DescribeRuleGroupMetadataRequest &other);
    DescribeRuleGroupMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuleGroupMetadataRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
