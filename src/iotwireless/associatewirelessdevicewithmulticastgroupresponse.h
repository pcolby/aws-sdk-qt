// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "associatewirelessdevicewithmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessDeviceWithMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    AssociateWirelessDeviceWithMulticastGroupResponse(const AssociateWirelessDeviceWithMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWirelessDeviceWithMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessDeviceWithMulticastGroupResponse)
    Q_DISABLE_COPY(AssociateWirelessDeviceWithMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
