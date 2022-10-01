// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGRESPONSE_P_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithThingResponse;

class AssociateWirelessDeviceWithThingResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit AssociateWirelessDeviceWithThingResponsePrivate(AssociateWirelessDeviceWithThingResponse * const q);

    void parseAssociateWirelessDeviceWithThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessDeviceWithThingResponse)
    Q_DISABLE_COPY(AssociateWirelessDeviceWithThingResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
