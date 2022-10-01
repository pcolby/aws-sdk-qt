// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessDeviceWithMulticastGroupRequest : public IoTWirelessRequest {

public:
    AssociateWirelessDeviceWithMulticastGroupRequest(const AssociateWirelessDeviceWithMulticastGroupRequest &other);
    AssociateWirelessDeviceWithMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessDeviceWithMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
