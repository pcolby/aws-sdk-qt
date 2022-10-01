// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSDEVICERESPONSE_H
#define QTAWS_GETWIRELESSDEVICERESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessDeviceResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessDeviceResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessDeviceResponse(const GetWirelessDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessDeviceResponse)
    Q_DISABLE_COPY(GetWirelessDeviceResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
