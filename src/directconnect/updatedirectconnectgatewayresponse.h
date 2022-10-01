// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYRESPONSE_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYRESPONSE_H

#include "directconnectresponse.h"
#include "updatedirectconnectgatewayrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateDirectConnectGatewayResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    UpdateDirectConnectGatewayResponse(const UpdateDirectConnectGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDirectConnectGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDirectConnectGatewayResponse)
    Q_DISABLE_COPY(UpdateDirectConnectGatewayResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
