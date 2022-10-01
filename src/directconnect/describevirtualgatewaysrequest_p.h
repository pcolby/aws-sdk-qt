// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describevirtualgatewaysrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualGatewaysRequest;

class DescribeVirtualGatewaysRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeVirtualGatewaysRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeVirtualGatewaysRequest * const q);
    DescribeVirtualGatewaysRequestPrivate(const DescribeVirtualGatewaysRequestPrivate &other,
                                   DescribeVirtualGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualGatewaysRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
