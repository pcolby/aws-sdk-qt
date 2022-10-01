// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEINSTANCESRESPONSE_P_H
#define QTAWS_LISTDEVICEINSTANCESRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListDeviceInstancesResponse;

class ListDeviceInstancesResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListDeviceInstancesResponsePrivate(ListDeviceInstancesResponse * const q);

    void parseListDeviceInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceInstancesResponse)
    Q_DISABLE_COPY(ListDeviceInstancesResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
