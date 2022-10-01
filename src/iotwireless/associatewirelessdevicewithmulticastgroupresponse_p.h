// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithMulticastGroupResponse;

class AssociateWirelessDeviceWithMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit AssociateWirelessDeviceWithMulticastGroupResponsePrivate(AssociateWirelessDeviceWithMulticastGroupResponse * const q);

    void parseAssociateWirelessDeviceWithMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessDeviceWithMulticastGroupResponse)
    Q_DISABLE_COPY(AssociateWirelessDeviceWithMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
