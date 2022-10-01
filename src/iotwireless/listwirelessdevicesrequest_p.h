// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSDEVICESREQUEST_P_H
#define QTAWS_LISTWIRELESSDEVICESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listwirelessdevicesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessDevicesRequest;

class ListWirelessDevicesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListWirelessDevicesRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListWirelessDevicesRequest * const q);
    ListWirelessDevicesRequestPrivate(const ListWirelessDevicesRequestPrivate &other,
                                   ListWirelessDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWirelessDevicesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
