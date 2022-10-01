// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describedirectconnectgatewayassociationsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationsRequest;

class DescribeDirectConnectGatewayAssociationsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeDirectConnectGatewayAssociationsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeDirectConnectGatewayAssociationsRequest * const q);
    DescribeDirectConnectGatewayAssociationsRequestPrivate(const DescribeDirectConnectGatewayAssociationsRequestPrivate &other,
                                   DescribeDirectConnectGatewayAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewayAssociationsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
