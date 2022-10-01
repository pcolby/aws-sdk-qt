// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_H
#define QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "startbulkassociatewirelessdevicewithmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkAssociateWirelessDeviceWithMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT StartBulkAssociateWirelessDeviceWithMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    StartBulkAssociateWirelessDeviceWithMulticastGroupResponse(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBulkAssociateWirelessDeviceWithMulticastGroupResponse)
    Q_DISABLE_COPY(StartBulkAssociateWirelessDeviceWithMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
