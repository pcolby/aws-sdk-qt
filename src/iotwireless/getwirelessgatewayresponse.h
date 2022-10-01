// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYRESPONSE_H
#define QTAWS_GETWIRELESSGATEWAYRESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessGatewayResponse(const GetWirelessGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayResponse)
    Q_DISABLE_COPY(GetWirelessGatewayResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
