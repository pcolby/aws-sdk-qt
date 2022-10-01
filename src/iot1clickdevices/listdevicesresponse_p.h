// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESRESPONSE_P_H
#define QTAWS_LISTDEVICESRESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class ListDevicesResponse;

class ListDevicesResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit ListDevicesResponsePrivate(ListDevicesResponse * const q);

    void parseListDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDevicesResponse)
    Q_DISABLE_COPY(ListDevicesResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
