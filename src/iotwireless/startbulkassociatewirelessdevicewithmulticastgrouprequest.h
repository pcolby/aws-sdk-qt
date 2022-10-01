// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_H
#define QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkAssociateWirelessDeviceWithMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT StartBulkAssociateWirelessDeviceWithMulticastGroupRequest : public IoTWirelessRequest {

public:
    StartBulkAssociateWirelessDeviceWithMulticastGroupRequest(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest &other);
    StartBulkAssociateWirelessDeviceWithMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBulkAssociateWirelessDeviceWithMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
