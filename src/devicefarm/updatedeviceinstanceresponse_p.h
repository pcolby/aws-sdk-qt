// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEINSTANCERESPONSE_P_H
#define QTAWS_UPDATEDEVICEINSTANCERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDeviceInstanceResponse;

class UpdateDeviceInstanceResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit UpdateDeviceInstanceResponsePrivate(UpdateDeviceInstanceResponse * const q);

    void parseUpdateDeviceInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceInstanceResponse)
    Q_DISABLE_COPY(UpdateDeviceInstanceResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
