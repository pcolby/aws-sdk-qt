// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWIRELESSDEVICERESPONSE_H
#define QTAWS_UPDATEWIRELESSDEVICERESPONSE_H

#include "iotwirelessresponse.h"
#include "updatewirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateWirelessDeviceResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateWirelessDeviceResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateWirelessDeviceResponse(const UpdateWirelessDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWirelessDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWirelessDeviceResponse)
    Q_DISABLE_COPY(UpdateWirelessDeviceResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
