// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEGATEWAYCAPABILITYCONFIGURATIONREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayCapabilityConfigurationRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeGatewayCapabilityConfigurationRequest : public IoTSiteWiseRequest {

public:
    DescribeGatewayCapabilityConfigurationRequest(const DescribeGatewayCapabilityConfigurationRequest &other);
    DescribeGatewayCapabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayCapabilityConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
