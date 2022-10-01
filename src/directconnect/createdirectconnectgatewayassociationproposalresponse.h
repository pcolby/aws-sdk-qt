// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_H

#include "directconnectresponse.h"
#include "createdirectconnectgatewayassociationproposalrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationProposalResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateDirectConnectGatewayAssociationProposalResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreateDirectConnectGatewayAssociationProposalResponse(const CreateDirectConnectGatewayAssociationProposalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDirectConnectGatewayAssociationProposalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectConnectGatewayAssociationProposalResponse)
    Q_DISABLE_COPY(CreateDirectConnectGatewayAssociationProposalResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
