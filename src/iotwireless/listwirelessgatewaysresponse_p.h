// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSGATEWAYSRESPONSE_P_H
#define QTAWS_LISTWIRELESSGATEWAYSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessGatewaysResponse;

class ListWirelessGatewaysResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListWirelessGatewaysResponsePrivate(ListWirelessGatewaysResponse * const q);

    void parseListWirelessGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWirelessGatewaysResponse)
    Q_DISABLE_COPY(ListWirelessGatewaysResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
