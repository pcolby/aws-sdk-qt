// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFIREWALLRESPONSE_P_H
#define QTAWS_DESCRIBEFIREWALLRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeFirewallResponse;

class DescribeFirewallResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DescribeFirewallResponsePrivate(DescribeFirewallResponse * const q);

    void parseDescribeFirewallResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFirewallResponse)
    Q_DISABLE_COPY(DescribeFirewallResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
