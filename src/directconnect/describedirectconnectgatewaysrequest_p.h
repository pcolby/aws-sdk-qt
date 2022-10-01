// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describedirectconnectgatewaysrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewaysRequest;

class DescribeDirectConnectGatewaysRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeDirectConnectGatewaysRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeDirectConnectGatewaysRequest * const q);
    DescribeDirectConnectGatewaysRequestPrivate(const DescribeDirectConnectGatewaysRequestPrivate &other,
                                   DescribeDirectConnectGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewaysRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
