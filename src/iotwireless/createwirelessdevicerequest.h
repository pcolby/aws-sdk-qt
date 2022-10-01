// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSDEVICEREQUEST_H
#define QTAWS_CREATEWIRELESSDEVICEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessDeviceRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessDeviceRequest : public IoTWirelessRequest {

public:
    CreateWirelessDeviceRequest(const CreateWirelessDeviceRequest &other);
    CreateWirelessDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
