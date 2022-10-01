// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYRESPONSE_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYRESPONSE_H

#include "directconnectresponse.h"
#include "createdirectconnectgatewayrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateDirectConnectGatewayResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreateDirectConnectGatewayResponse(const CreateDirectConnectGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDirectConnectGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectConnectGatewayResponse)
    Q_DISABLE_COPY(CreateDirectConnectGatewayResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
