// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEDEVICEMETHODRESPONSE_P_H
#define QTAWS_INVOKEDEVICEMETHODRESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InvokeDeviceMethodResponse;

class InvokeDeviceMethodResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit InvokeDeviceMethodResponsePrivate(InvokeDeviceMethodResponse * const q);

    void parseInvokeDeviceMethodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InvokeDeviceMethodResponse)
    Q_DISABLE_COPY(InvokeDeviceMethodResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
