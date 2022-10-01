// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBELOGGINGCONFIGURATIONRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeLoggingConfigurationResponse;

class DescribeLoggingConfigurationResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DescribeLoggingConfigurationResponsePrivate(DescribeLoggingConfigurationResponse * const q);

    void parseDescribeLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingConfigurationResponse)
    Q_DISABLE_COPY(DescribeLoggingConfigurationResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
