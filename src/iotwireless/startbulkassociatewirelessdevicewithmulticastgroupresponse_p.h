// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_P_H
#define QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkAssociateWirelessDeviceWithMulticastGroupResponse;

class StartBulkAssociateWirelessDeviceWithMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit StartBulkAssociateWirelessDeviceWithMulticastGroupResponsePrivate(StartBulkAssociateWirelessDeviceWithMulticastGroupResponse * const q);

    void parseStartBulkAssociateWirelessDeviceWithMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBulkAssociateWirelessDeviceWithMulticastGroupResponse)
    Q_DISABLE_COPY(StartBulkAssociateWirelessDeviceWithMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
