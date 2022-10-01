// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessDeviceFromMulticastGroupRequest : public IoTWirelessRequest {

public:
    DisassociateWirelessDeviceFromMulticastGroupRequest(const DisassociateWirelessDeviceFromMulticastGroupRequest &other);
    DisassociateWirelessDeviceFromMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessDeviceFromMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
