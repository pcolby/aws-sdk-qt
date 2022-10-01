// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINALIZEDEVICECLAIMRESPONSE_P_H
#define QTAWS_FINALIZEDEVICECLAIMRESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class FinalizeDeviceClaimResponse;

class FinalizeDeviceClaimResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit FinalizeDeviceClaimResponsePrivate(FinalizeDeviceClaimResponse * const q);

    void parseFinalizeDeviceClaimResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FinalizeDeviceClaimResponse)
    Q_DISABLE_COPY(FinalizeDeviceClaimResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
