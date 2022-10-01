// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLRESPONSE_P_H
#define QTAWS_GETDEVICEPOOLRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolResponse;

class GetDevicePoolResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetDevicePoolResponsePrivate(GetDevicePoolResponse * const q);

    void parseGetDevicePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevicePoolResponse)
    Q_DISABLE_COPY(GetDevicePoolResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
