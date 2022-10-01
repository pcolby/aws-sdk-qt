// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationProposalRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest {

public:
    DeleteDirectConnectGatewayAssociationProposalRequest(const DeleteDirectConnectGatewayAssociationProposalRequest &other);
    DeleteDirectConnectGatewayAssociationProposalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectConnectGatewayAssociationProposalRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
