// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_P_H
#define QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse;

class StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate(StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse * const q);

    void parseStartBulkDisassociateWirelessDeviceFromMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse)
    Q_DISABLE_COPY(StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
