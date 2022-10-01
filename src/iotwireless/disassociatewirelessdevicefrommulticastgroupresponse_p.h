// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromMulticastGroupResponse;

class DisassociateWirelessDeviceFromMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DisassociateWirelessDeviceFromMulticastGroupResponsePrivate(DisassociateWirelessDeviceFromMulticastGroupResponse * const q);

    void parseDisassociateWirelessDeviceFromMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessDeviceFromMulticastGroupResponse)
    Q_DISABLE_COPY(DisassociateWirelessDeviceFromMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
