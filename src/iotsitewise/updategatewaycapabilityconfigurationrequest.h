// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayCapabilityConfigurationRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateGatewayCapabilityConfigurationRequest : public IoTSiteWiseRequest {

public:
    UpdateGatewayCapabilityConfigurationRequest(const UpdateGatewayCapabilityConfigurationRequest &other);
    UpdateGatewayCapabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayCapabilityConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
