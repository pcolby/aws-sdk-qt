// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYFIRMWAREINFORMATIONRESPONSE_H
#define QTAWS_GETWIRELESSGATEWAYFIRMWAREINFORMATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessgatewayfirmwareinformationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayFirmwareInformationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayFirmwareInformationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessGatewayFirmwareInformationResponse(const GetWirelessGatewayFirmwareInformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessGatewayFirmwareInformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayFirmwareInformationResponse)
    Q_DISABLE_COPY(GetWirelessGatewayFirmwareInformationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
