// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_H

#include "directconnectresponse.h"
#include "deletedirectconnectgatewayassociationrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteDirectConnectGatewayAssociationResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DeleteDirectConnectGatewayAssociationResponse(const DeleteDirectConnectGatewayAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDirectConnectGatewayAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectConnectGatewayAssociationResponse)
    Q_DISABLE_COPY(DeleteDirectConnectGatewayAssociationResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
