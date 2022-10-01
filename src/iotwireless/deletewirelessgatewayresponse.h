// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYRESPONSE_H
#define QTAWS_DELETEWIRELESSGATEWAYRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletewirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteWirelessGatewayResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteWirelessGatewayResponse(const DeleteWirelessGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWirelessGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWirelessGatewayResponse)
    Q_DISABLE_COPY(DeleteWirelessGatewayResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
