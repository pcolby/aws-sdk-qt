// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_H

#include "directconnectresponse.h"
#include "createdirectconnectgatewayassociationrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateDirectConnectGatewayAssociationResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreateDirectConnectGatewayAssociationResponse(const CreateDirectConnectGatewayAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDirectConnectGatewayAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectConnectGatewayAssociationResponse)
    Q_DISABLE_COPY(CreateDirectConnectGatewayAssociationResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
