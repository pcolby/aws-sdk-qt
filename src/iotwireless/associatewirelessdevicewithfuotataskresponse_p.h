// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKRESPONSE_P_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithFuotaTaskResponse;

class AssociateWirelessDeviceWithFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit AssociateWirelessDeviceWithFuotaTaskResponsePrivate(AssociateWirelessDeviceWithFuotaTaskResponse * const q);

    void parseAssociateWirelessDeviceWithFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessDeviceWithFuotaTaskResponse)
    Q_DISABLE_COPY(AssociateWirelessDeviceWithFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
