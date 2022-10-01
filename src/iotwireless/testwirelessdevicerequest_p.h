// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTWIRELESSDEVICEREQUEST_P_H
#define QTAWS_TESTWIRELESSDEVICEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "testwirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class TestWirelessDeviceRequest;

class TestWirelessDeviceRequestPrivate : public IoTWirelessRequestPrivate {

public:
    TestWirelessDeviceRequestPrivate(const IoTWirelessRequest::Action action,
                                   TestWirelessDeviceRequest * const q);
    TestWirelessDeviceRequestPrivate(const TestWirelessDeviceRequestPrivate &other,
                                   TestWirelessDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
