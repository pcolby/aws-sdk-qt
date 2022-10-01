// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOOLSRESPONSE_P_H
#define QTAWS_LISTDEVICEPOOLSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListDevicePoolsResponse;

class ListDevicePoolsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListDevicePoolsResponsePrivate(ListDevicePoolsResponse * const q);

    void parseListDevicePoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDevicePoolsResponse)
    Q_DISABLE_COPY(ListDevicePoolsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
