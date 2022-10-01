// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLREQUEST_H
#define QTAWS_DESCRIBEFIREWALLREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeFirewallRequest : public NetworkFirewallRequest {

public:
    DescribeFirewallRequest(const DescribeFirewallRequest &other);
    DescribeFirewallRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFirewallRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
