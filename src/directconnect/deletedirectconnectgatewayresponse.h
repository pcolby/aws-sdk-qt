// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYRESPONSE_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYRESPONSE_H

#include "directconnectresponse.h"
#include "deletedirectconnectgatewayrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteDirectConnectGatewayResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DeleteDirectConnectGatewayResponse(const DeleteDirectConnectGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDirectConnectGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectConnectGatewayResponse)
    Q_DISABLE_COPY(DeleteDirectConnectGatewayResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
