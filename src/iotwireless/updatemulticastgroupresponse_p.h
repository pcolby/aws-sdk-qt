// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTICASTGROUPRESPONSE_P_H
#define QTAWS_UPDATEMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateMulticastGroupResponse;

class UpdateMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateMulticastGroupResponsePrivate(UpdateMulticastGroupResponse * const q);

    void parseUpdateMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMulticastGroupResponse)
    Q_DISABLE_COPY(UpdateMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
