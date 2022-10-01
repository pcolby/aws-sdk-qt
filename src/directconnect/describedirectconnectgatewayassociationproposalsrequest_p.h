// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSREQUEST_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describedirectconnectgatewayassociationproposalsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationProposalsRequest;

class DescribeDirectConnectGatewayAssociationProposalsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeDirectConnectGatewayAssociationProposalsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeDirectConnectGatewayAssociationProposalsRequest * const q);
    DescribeDirectConnectGatewayAssociationProposalsRequestPrivate(const DescribeDirectConnectGatewayAssociationProposalsRequestPrivate &other,
                                   DescribeDirectConnectGatewayAssociationProposalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewayAssociationProposalsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
