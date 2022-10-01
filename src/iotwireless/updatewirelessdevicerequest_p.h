// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWIRELESSDEVICEREQUEST_P_H
#define QTAWS_UPDATEWIRELESSDEVICEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatewirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateWirelessDeviceRequest;

class UpdateWirelessDeviceRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateWirelessDeviceRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateWirelessDeviceRequest * const q);
    UpdateWirelessDeviceRequestPrivate(const UpdateWirelessDeviceRequestPrivate &other,
                                   UpdateWirelessDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
