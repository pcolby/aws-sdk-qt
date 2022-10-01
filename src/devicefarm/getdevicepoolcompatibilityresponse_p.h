// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLCOMPATIBILITYRESPONSE_P_H
#define QTAWS_GETDEVICEPOOLCOMPATIBILITYRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolCompatibilityResponse;

class GetDevicePoolCompatibilityResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetDevicePoolCompatibilityResponsePrivate(GetDevicePoolCompatibilityResponse * const q);

    void parseGetDevicePoolCompatibilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevicePoolCompatibilityResponse)
    Q_DISABLE_COPY(GetDevicePoolCompatibilityResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
