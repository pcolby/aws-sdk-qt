// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEINSTANCERESPONSE_P_H
#define QTAWS_GETDEVICEINSTANCERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetDeviceInstanceResponse;

class GetDeviceInstanceResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetDeviceInstanceResponsePrivate(GetDeviceInstanceResponse * const q);

    void parseGetDeviceInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceInstanceResponse)
    Q_DISABLE_COPY(GetDeviceInstanceResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
