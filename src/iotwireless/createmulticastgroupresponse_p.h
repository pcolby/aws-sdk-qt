// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTICASTGROUPRESPONSE_P_H
#define QTAWS_CREATEMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateMulticastGroupResponse;

class CreateMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateMulticastGroupResponsePrivate(CreateMulticastGroupResponse * const q);

    void parseCreateMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMulticastGroupResponse)
    Q_DISABLE_COPY(CreateMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
