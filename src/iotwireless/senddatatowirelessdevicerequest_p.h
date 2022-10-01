// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOWIRELESSDEVICEREQUEST_P_H
#define QTAWS_SENDDATATOWIRELESSDEVICEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "senddatatowirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToWirelessDeviceRequest;

class SendDataToWirelessDeviceRequestPrivate : public IoTWirelessRequestPrivate {

public:
    SendDataToWirelessDeviceRequestPrivate(const IoTWirelessRequest::Action action,
                                   SendDataToWirelessDeviceRequest * const q);
    SendDataToWirelessDeviceRequestPrivate(const SendDataToWirelessDeviceRequestPrivate &other,
                                   SendDataToWirelessDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendDataToWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
