// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGRESPONSE_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGRESPONSE_H

#include "iotwirelessresponse.h"
#include "associatewirelessdevicewiththingrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithThingResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessDeviceWithThingResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    AssociateWirelessDeviceWithThingResponse(const AssociateWirelessDeviceWithThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWirelessDeviceWithThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessDeviceWithThingResponse)
    Q_DISABLE_COPY(AssociateWirelessDeviceWithThingResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
