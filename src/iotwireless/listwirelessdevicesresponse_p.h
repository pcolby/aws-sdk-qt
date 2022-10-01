// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSDEVICESRESPONSE_P_H
#define QTAWS_LISTWIRELESSDEVICESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessDevicesResponse;

class ListWirelessDevicesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListWirelessDevicesResponsePrivate(ListWirelessDevicesResponse * const q);

    void parseListWirelessDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWirelessDevicesResponse)
    Q_DISABLE_COPY(ListWirelessDevicesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
