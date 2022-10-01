// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMDEVICESBYCLAIMCODERESPONSE_P_H
#define QTAWS_CLAIMDEVICESBYCLAIMCODERESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class ClaimDevicesByClaimCodeResponse;

class ClaimDevicesByClaimCodeResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit ClaimDevicesByClaimCodeResponsePrivate(ClaimDevicesByClaimCodeResponse * const q);

    void parseClaimDevicesByClaimCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ClaimDevicesByClaimCodeResponse)
    Q_DISABLE_COPY(ClaimDevicesByClaimCodeResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
