// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayCapabilityConfigurationResponse;

class UpdateGatewayCapabilityConfigurationResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit UpdateGatewayCapabilityConfigurationResponsePrivate(UpdateGatewayCapabilityConfigurationResponse * const q);

    void parseUpdateGatewayCapabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayCapabilityConfigurationResponse)
    Q_DISABLE_COPY(UpdateGatewayCapabilityConfigurationResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
