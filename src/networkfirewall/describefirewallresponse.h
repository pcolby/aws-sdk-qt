// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLRESPONSE_H
#define QTAWS_DESCRIBEFIREWALLRESPONSE_H

#include "networkfirewallresponse.h"
#include "describefirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeFirewallResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DescribeFirewallResponse(const DescribeFirewallRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFirewallRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFirewallResponse)
    Q_DISABLE_COPY(DescribeFirewallResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
