// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEPOOLRESPONSE_P_H
#define QTAWS_DELETEDEVICEPOOLRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteDevicePoolResponse;

class DeleteDevicePoolResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteDevicePoolResponsePrivate(DeleteDevicePoolResponse * const q);

    void parseDeleteDevicePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDevicePoolResponse)
    Q_DISABLE_COPY(DeleteDevicePoolResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
