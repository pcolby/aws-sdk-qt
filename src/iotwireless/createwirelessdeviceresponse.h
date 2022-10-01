// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSDEVICERESPONSE_H
#define QTAWS_CREATEWIRELESSDEVICERESPONSE_H

#include "iotwirelessresponse.h"
#include "createwirelessdevicerequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessDeviceResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessDeviceResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateWirelessDeviceResponse(const CreateWirelessDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWirelessDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessDeviceResponse)
    Q_DISABLE_COPY(CreateWirelessDeviceResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
