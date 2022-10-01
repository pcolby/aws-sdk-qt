// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYATTACHMENTSREQUEST_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYATTACHMENTSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describedirectconnectgatewayattachmentsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAttachmentsRequest;

class DescribeDirectConnectGatewayAttachmentsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeDirectConnectGatewayAttachmentsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeDirectConnectGatewayAttachmentsRequest * const q);
    DescribeDirectConnectGatewayAttachmentsRequestPrivate(const DescribeDirectConnectGatewayAttachmentsRequestPrivate &other,
                                   DescribeDirectConnectGatewayAttachmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewayAttachmentsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
