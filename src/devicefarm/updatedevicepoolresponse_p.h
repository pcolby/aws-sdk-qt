// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOOLRESPONSE_P_H
#define QTAWS_UPDATEDEVICEPOOLRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDevicePoolResponse;

class UpdateDevicePoolResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit UpdateDevicePoolResponsePrivate(UpdateDevicePoolResponse * const q);

    void parseUpdateDevicePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDevicePoolResponse)
    Q_DISABLE_COPY(UpdateDevicePoolResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
