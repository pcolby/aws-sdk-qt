// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGRESPONSE_P_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromThingResponse;

class DisassociateWirelessDeviceFromThingResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DisassociateWirelessDeviceFromThingResponsePrivate(DisassociateWirelessDeviceFromThingResponse * const q);

    void parseDisassociateWirelessDeviceFromThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessDeviceFromThingResponse)
    Q_DISABLE_COPY(DisassociateWirelessDeviceFromThingResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
