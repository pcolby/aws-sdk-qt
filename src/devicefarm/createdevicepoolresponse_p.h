// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPOOLRESPONSE_P_H
#define QTAWS_CREATEDEVICEPOOLRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class CreateDevicePoolResponse;

class CreateDevicePoolResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit CreateDevicePoolResponsePrivate(CreateDevicePoolResponse * const q);

    void parseCreateDevicePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDevicePoolResponse)
    Q_DISABLE_COPY(CreateDevicePoolResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
