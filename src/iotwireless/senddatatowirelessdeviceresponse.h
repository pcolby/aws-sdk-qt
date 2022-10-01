// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOWIRELESSDEVICERESPONSE_H
#define QTAWS_SENDDATATOWIRELESSDEVICERESPONSE_H

#include "iotwirelessresponse.h"
#include "senddatatowirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToWirelessDeviceResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT SendDataToWirelessDeviceResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    SendDataToWirelessDeviceResponse(const SendDataToWirelessDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendDataToWirelessDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendDataToWirelessDeviceResponse)
    Q_DISABLE_COPY(SendDataToWirelessDeviceResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
