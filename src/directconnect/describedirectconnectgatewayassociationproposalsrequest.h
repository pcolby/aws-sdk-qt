// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSREQUEST_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationProposalsRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeDirectConnectGatewayAssociationProposalsRequest : public DirectConnectRequest {

public:
    DescribeDirectConnectGatewayAssociationProposalsRequest(const DescribeDirectConnectGatewayAssociationProposalsRequest &other);
    DescribeDirectConnectGatewayAssociationProposalsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectConnectGatewayAssociationProposalsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
