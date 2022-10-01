// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSDEVICEREQUEST_P_H
#define QTAWS_DELETEWIRELESSDEVICEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletewirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessDeviceRequest;

class DeleteWirelessDeviceRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteWirelessDeviceRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteWirelessDeviceRequest * const q);
    DeleteWirelessDeviceRequestPrivate(const DeleteWirelessDeviceRequestPrivate &other,
                                   DeleteWirelessDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
