// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWIRELESSGATEWAYRESPONSE_H
#define QTAWS_UPDATEWIRELESSGATEWAYRESPONSE_H

#include "iotwirelessresponse.h"
#include "updatewirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateWirelessGatewayResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateWirelessGatewayResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateWirelessGatewayResponse(const UpdateWirelessGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWirelessGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWirelessGatewayResponse)
    Q_DISABLE_COPY(UpdateWirelessGatewayResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
