// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDEVICECLAIMRESPONSE_P_H
#define QTAWS_INITIATEDEVICECLAIMRESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InitiateDeviceClaimResponse;

class InitiateDeviceClaimResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit InitiateDeviceClaimResponsePrivate(InitiateDeviceClaimResponse * const q);

    void parseInitiateDeviceClaimResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitiateDeviceClaimResponse)
    Q_DISABLE_COPY(InitiateDeviceClaimResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
