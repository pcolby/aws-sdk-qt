// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayCapabilityConfigurationResponse;

class DescribeGatewayCapabilityConfigurationResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeGatewayCapabilityConfigurationResponsePrivate(DescribeGatewayCapabilityConfigurationResponse * const q);

    void parseDescribeGatewayCapabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayCapabilityConfigurationResponse)
    Q_DISABLE_COPY(DescribeGatewayCapabilityConfigurationResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
