// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPSESSIONRESPONSE_P_H
#define QTAWS_GETMULTICASTGROUPSESSIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupSessionResponse;

class GetMulticastGroupSessionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetMulticastGroupSessionResponsePrivate(GetMulticastGroupSessionResponse * const q);

    void parseGetMulticastGroupSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMulticastGroupSessionResponse)
    Q_DISABLE_COPY(GetMulticastGroupSessionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
