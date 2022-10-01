// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTICASTGROUPSESSIONRESPONSE_P_H
#define QTAWS_STARTMULTICASTGROUPSESSIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class StartMulticastGroupSessionResponse;

class StartMulticastGroupSessionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit StartMulticastGroupSessionResponsePrivate(StartMulticastGroupSessionResponse * const q);

    void parseStartMulticastGroupSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMulticastGroupSessionResponse)
    Q_DISABLE_COPY(StartMulticastGroupSessionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
