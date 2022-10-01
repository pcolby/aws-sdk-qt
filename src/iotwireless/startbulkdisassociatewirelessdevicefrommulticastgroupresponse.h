// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_H
#define QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "startbulkdisassociatewirelessdevicefrommulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse)
    Q_DISABLE_COPY(StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
