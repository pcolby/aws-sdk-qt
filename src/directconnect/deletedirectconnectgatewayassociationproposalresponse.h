// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_H

#include "directconnectresponse.h"
#include "deletedirectconnectgatewayassociationproposalrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationProposalResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteDirectConnectGatewayAssociationProposalResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DeleteDirectConnectGatewayAssociationProposalResponse(const DeleteDirectConnectGatewayAssociationProposalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDirectConnectGatewayAssociationProposalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectConnectGatewayAssociationProposalResponse)
    Q_DISABLE_COPY(DeleteDirectConnectGatewayAssociationProposalResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
