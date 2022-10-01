// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_H

#include "directconnectresponse.h"
#include "updatedirectconnectgatewayassociationrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayAssociationResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateDirectConnectGatewayAssociationResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    UpdateDirectConnectGatewayAssociationResponse(const UpdateDirectConnectGatewayAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDirectConnectGatewayAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDirectConnectGatewayAssociationResponse)
    Q_DISABLE_COPY(UpdateDirectConnectGatewayAssociationResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
