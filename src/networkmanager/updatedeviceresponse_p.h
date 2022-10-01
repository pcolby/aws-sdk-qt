// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICERESPONSE_P_H
#define QTAWS_UPDATEDEVICERESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class UpdateDeviceResponse;

class UpdateDeviceResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit UpdateDeviceResponsePrivate(UpdateDeviceResponse * const q);

    void parseUpdateDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceResponse)
    Q_DISABLE_COPY(UpdateDeviceResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
