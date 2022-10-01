// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKREQUEST_P_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "disassociatewirelessdevicefromfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromFuotaTaskRequest;

class DisassociateWirelessDeviceFromFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DisassociateWirelessDeviceFromFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   DisassociateWirelessDeviceFromFuotaTaskRequest * const q);
    DisassociateWirelessDeviceFromFuotaTaskRequestPrivate(const DisassociateWirelessDeviceFromFuotaTaskRequestPrivate &other,
                                   DisassociateWirelessDeviceFromFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessDeviceFromFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
