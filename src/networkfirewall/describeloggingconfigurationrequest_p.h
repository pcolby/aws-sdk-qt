// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBELOGGINGCONFIGURATIONREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "describeloggingconfigurationrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeLoggingConfigurationRequest;

class DescribeLoggingConfigurationRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DescribeLoggingConfigurationRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DescribeLoggingConfigurationRequest * const q);
    DescribeLoggingConfigurationRequestPrivate(const DescribeLoggingConfigurationRequestPrivate &other,
                                   DescribeLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingConfigurationRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
