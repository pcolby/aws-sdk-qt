// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSDEVICEREQUEST_P_H
#define QTAWS_CREATEWIRELESSDEVICEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createwirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessDeviceRequest;

class CreateWirelessDeviceRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateWirelessDeviceRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateWirelessDeviceRequest * const q);
    CreateWirelessDeviceRequestPrivate(const CreateWirelessDeviceRequestPrivate &other,
                                   CreateWirelessDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
