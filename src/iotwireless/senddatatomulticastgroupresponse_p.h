// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOMULTICASTGROUPRESPONSE_P_H
#define QTAWS_SENDDATATOMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToMulticastGroupResponse;

class SendDataToMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit SendDataToMulticastGroupResponsePrivate(SendDataToMulticastGroupResponse * const q);

    void parseSendDataToMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendDataToMulticastGroupResponse)
    Q_DISABLE_COPY(SendDataToMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
