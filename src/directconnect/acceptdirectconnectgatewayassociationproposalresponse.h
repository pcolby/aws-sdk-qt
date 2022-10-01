// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_H
#define QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_H

#include "directconnectresponse.h"
#include "acceptdirectconnectgatewayassociationproposalrequest.h"

namespace QtAws {
namespace DirectConnect {

class AcceptDirectConnectGatewayAssociationProposalResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AcceptDirectConnectGatewayAssociationProposalResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AcceptDirectConnectGatewayAssociationProposalResponse(const AcceptDirectConnectGatewayAssociationProposalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptDirectConnectGatewayAssociationProposalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptDirectConnectGatewayAssociationProposalResponse)
    Q_DISABLE_COPY(AcceptDirectConnectGatewayAssociationProposalResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
