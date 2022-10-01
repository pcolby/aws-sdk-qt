// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSDEVICEREQUEST_H
#define QTAWS_DELETEWIRELESSDEVICEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessDeviceRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteWirelessDeviceRequest : public IoTWirelessRequest {

public:
    DeleteWirelessDeviceRequest(const DeleteWirelessDeviceRequest &other);
    DeleteWirelessDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWirelessDeviceRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
