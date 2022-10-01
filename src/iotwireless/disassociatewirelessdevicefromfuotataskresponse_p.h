// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKRESPONSE_P_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromFuotaTaskResponse;

class DisassociateWirelessDeviceFromFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DisassociateWirelessDeviceFromFuotaTaskResponsePrivate(DisassociateWirelessDeviceFromFuotaTaskResponse * const q);

    void parseDisassociateWirelessDeviceFromFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessDeviceFromFuotaTaskResponse)
    Q_DISABLE_COPY(DisassociateWirelessDeviceFromFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
