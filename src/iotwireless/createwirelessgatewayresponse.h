// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYRESPONSE_H
#define QTAWS_CREATEWIRELESSGATEWAYRESPONSE_H

#include "iotwirelessresponse.h"
#include "createwirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessGatewayResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateWirelessGatewayResponse(const CreateWirelessGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWirelessGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessGatewayResponse)
    Q_DISABLE_COPY(CreateWirelessGatewayResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
