// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEPROFILERESPONSE_P_H
#define QTAWS_CREATESERVICEPROFILERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateServiceProfileResponse;

class CreateServiceProfileResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateServiceProfileResponsePrivate(CreateServiceProfileResponse * const q);

    void parseCreateServiceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServiceProfileResponse)
    Q_DISABLE_COPY(CreateServiceProfileResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
