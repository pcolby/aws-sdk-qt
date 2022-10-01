// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "disassociatewirelessdevicefrommulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessDeviceFromMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DisassociateWirelessDeviceFromMulticastGroupResponse(const DisassociateWirelessDeviceFromMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWirelessDeviceFromMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessDeviceFromMulticastGroupResponse)
    Q_DISABLE_COPY(DisassociateWirelessDeviceFromMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
