// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOWIRELESSDEVICEREQUEST_H
#define QTAWS_SENDDATATOWIRELESSDEVICEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToWirelessDeviceRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT SendDataToWirelessDeviceRequest : public IoTWirelessRequest {

public:
    SendDataToWirelessDeviceRequest(const SendDataToWirelessDeviceRequest &other);
    SendDataToWirelessDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendDataToWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
