// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEGATEWAYCAPABILITYCONFIGURATIONRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updategatewaycapabilityconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayCapabilityConfigurationResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateGatewayCapabilityConfigurationResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdateGatewayCapabilityConfigurationResponse(const UpdateGatewayCapabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewayCapabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayCapabilityConfigurationResponse)
    Q_DISABLE_COPY(UpdateGatewayCapabilityConfigurationResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
