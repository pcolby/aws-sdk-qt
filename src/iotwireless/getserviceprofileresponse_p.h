// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEPROFILERESPONSE_P_H
#define QTAWS_GETSERVICEPROFILERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetServiceProfileResponse;

class GetServiceProfileResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetServiceProfileResponsePrivate(GetServiceProfileResponse * const q);

    void parseGetServiceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceProfileResponse)
    Q_DISABLE_COPY(GetServiceProfileResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
