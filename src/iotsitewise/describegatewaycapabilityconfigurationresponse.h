// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describegatewaycapabilityconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayCapabilityConfigurationResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeGatewayCapabilityConfigurationResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeGatewayCapabilityConfigurationResponse(const DescribeGatewayCapabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGatewayCapabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayCapabilityConfigurationResponse)
    Q_DISABLE_COPY(DescribeGatewayCapabilityConfigurationResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
