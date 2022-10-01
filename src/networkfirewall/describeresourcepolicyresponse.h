// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_H
#define QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_H

#include "networkfirewallresponse.h"
#include "describeresourcepolicyrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeResourcePolicyResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeResourcePolicyResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DescribeResourcePolicyResponse(const DescribeResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePolicyResponse)
    Q_DISABLE_COPY(DescribeResourcePolicyResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
