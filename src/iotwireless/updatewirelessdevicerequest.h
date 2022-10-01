// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWIRELESSDEVICEREQUEST_H
#define QTAWS_UPDATEWIRELESSDEVICEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateWirelessDeviceRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateWirelessDeviceRequest : public IoTWirelessRequest {

public:
    UpdateWirelessDeviceRequest(const UpdateWirelessDeviceRequest &other);
    UpdateWirelessDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
