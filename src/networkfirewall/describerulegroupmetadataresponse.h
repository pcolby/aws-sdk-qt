// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEGROUPMETADATARESPONSE_H
#define QTAWS_DESCRIBERULEGROUPMETADATARESPONSE_H

#include "networkfirewallresponse.h"
#include "describerulegroupmetadatarequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeRuleGroupMetadataResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeRuleGroupMetadataResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DescribeRuleGroupMetadataResponse(const DescribeRuleGroupMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRuleGroupMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuleGroupMetadataResponse)
    Q_DISABLE_COPY(DescribeRuleGroupMetadataResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
