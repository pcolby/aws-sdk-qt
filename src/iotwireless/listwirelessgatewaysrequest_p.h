// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSGATEWAYSREQUEST_P_H
#define QTAWS_LISTWIRELESSGATEWAYSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listwirelessgatewaysrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessGatewaysRequest;

class ListWirelessGatewaysRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListWirelessGatewaysRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListWirelessGatewaysRequest * const q);
    ListWirelessGatewaysRequestPrivate(const ListWirelessGatewaysRequestPrivate &other,
                                   ListWirelessGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWirelessGatewaysRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
