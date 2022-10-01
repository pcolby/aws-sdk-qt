// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationProposalRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest {

public:
    CreateDirectConnectGatewayAssociationProposalRequest(const CreateDirectConnectGatewayAssociationProposalRequest &other);
    CreateDirectConnectGatewayAssociationProposalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectConnectGatewayAssociationProposalRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
