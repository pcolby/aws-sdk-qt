// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_H
#define QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest : public IoTWirelessRequest {

public:
    StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest &other);
    StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
