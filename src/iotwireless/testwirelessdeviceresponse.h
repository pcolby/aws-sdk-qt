// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTWIRELESSDEVICERESPONSE_H
#define QTAWS_TESTWIRELESSDEVICERESPONSE_H

#include "iotwirelessresponse.h"
#include "testwirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class TestWirelessDeviceResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT TestWirelessDeviceResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    TestWirelessDeviceResponse(const TestWirelessDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestWirelessDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestWirelessDeviceResponse)
    Q_DISABLE_COPY(TestWirelessDeviceResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
