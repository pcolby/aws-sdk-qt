// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGRESPONSE_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGRESPONSE_H

#include "iotwirelessresponse.h"
#include "associatewirelessgatewaywiththingrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithThingResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessGatewayWithThingResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    AssociateWirelessGatewayWithThingResponse(const AssociateWirelessGatewayWithThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWirelessGatewayWithThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessGatewayWithThingResponse)
    Q_DISABLE_COPY(AssociateWirelessGatewayWithThingResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
