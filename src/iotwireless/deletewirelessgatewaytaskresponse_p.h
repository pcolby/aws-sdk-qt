// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKRESPONSE_P_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskResponse;

class DeleteWirelessGatewayTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteWirelessGatewayTaskResponsePrivate(DeleteWirelessGatewayTaskResponse * const q);

    void parseDeleteWirelessGatewayTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessGatewayTaskResponse)
    Q_DISABLE_COPY(DeleteWirelessGatewayTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
