// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describegatewaycapabilityconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayCapabilityConfigurationRequest;

class DescribeGatewayCapabilityConfigurationRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeGatewayCapabilityConfigurationRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeGatewayCapabilityConfigurationRequest * const q);
    DescribeGatewayCapabilityConfigurationRequestPrivate(const DescribeGatewayCapabilityConfigurationRequestPrivate &other,
                                   DescribeGatewayCapabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayCapabilityConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
