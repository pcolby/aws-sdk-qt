// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGREQUEST_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromThingRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessDeviceFromThingRequest : public IoTWirelessRequest {

public:
    DisassociateWirelessDeviceFromThingRequest(const DisassociateWirelessDeviceFromThingRequest &other);
    DisassociateWirelessDeviceFromThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessDeviceFromThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
