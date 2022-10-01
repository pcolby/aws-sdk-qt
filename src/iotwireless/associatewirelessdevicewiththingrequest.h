// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGREQUEST_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithThingRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessDeviceWithThingRequest : public IoTWirelessRequest {

public:
    AssociateWirelessDeviceWithThingRequest(const AssociateWirelessDeviceWithThingRequest &other);
    AssociateWirelessDeviceWithThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessDeviceWithThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
