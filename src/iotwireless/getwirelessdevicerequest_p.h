// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSDEVICEREQUEST_P_H
#define QTAWS_GETWIRELESSDEVICEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getwirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessDeviceRequest;

class GetWirelessDeviceRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetWirelessDeviceRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetWirelessDeviceRequest * const q);
    GetWirelessDeviceRequestPrivate(const GetWirelessDeviceRequestPrivate &other,
                                   GetWirelessDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
