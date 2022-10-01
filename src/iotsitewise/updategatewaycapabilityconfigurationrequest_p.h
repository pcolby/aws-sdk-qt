// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "updategatewaycapabilityconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayCapabilityConfigurationRequest;

class UpdateGatewayCapabilityConfigurationRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    UpdateGatewayCapabilityConfigurationRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   UpdateGatewayCapabilityConfigurationRequest * const q);
    UpdateGatewayCapabilityConfigurationRequestPrivate(const UpdateGatewayCapabilityConfigurationRequestPrivate &other,
                                   UpdateGatewayCapabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayCapabilityConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
