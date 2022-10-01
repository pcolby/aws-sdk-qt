// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGRESPONSE_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGRESPONSE_H

#include "iotwirelessresponse.h"
#include "disassociatewirelessdevicefromthingrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromThingResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessDeviceFromThingResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DisassociateWirelessDeviceFromThingResponse(const DisassociateWirelessDeviceFromThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWirelessDeviceFromThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessDeviceFromThingResponse)
    Q_DISABLE_COPY(DisassociateWirelessDeviceFromThingResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
