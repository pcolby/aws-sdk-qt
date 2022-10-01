// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGRESPONSE_H
#define QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGRESPONSE_H

#include "iotwirelessresponse.h"
#include "disassociatewirelessgatewayfromthingrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessGatewayFromThingResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessGatewayFromThingResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DisassociateWirelessGatewayFromThingResponse(const DisassociateWirelessGatewayFromThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWirelessGatewayFromThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessGatewayFromThingResponse)
    Q_DISABLE_COPY(DisassociateWirelessGatewayFromThingResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
