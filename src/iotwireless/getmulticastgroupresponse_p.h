// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPRESPONSE_P_H
#define QTAWS_GETMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupResponse;

class GetMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetMulticastGroupResponsePrivate(GetMulticastGroupResponse * const q);

    void parseGetMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMulticastGroupResponse)
    Q_DISABLE_COPY(GetMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
