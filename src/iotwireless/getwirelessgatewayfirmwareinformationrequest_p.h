// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYFIRMWAREINFORMATIONREQUEST_P_H
#define QTAWS_GETWIRELESSGATEWAYFIRMWAREINFORMATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getwirelessgatewayfirmwareinformationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayFirmwareInformationRequest;

class GetWirelessGatewayFirmwareInformationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetWirelessGatewayFirmwareInformationRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetWirelessGatewayFirmwareInformationRequest * const q);
    GetWirelessGatewayFirmwareInformationRequestPrivate(const GetWirelessGatewayFirmwareInformationRequestPrivate &other,
                                   GetWirelessGatewayFirmwareInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayFirmwareInformationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
