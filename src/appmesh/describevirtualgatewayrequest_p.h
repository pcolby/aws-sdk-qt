// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYREQUEST_P_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describevirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualGatewayRequest;

class DescribeVirtualGatewayRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeVirtualGatewayRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeVirtualGatewayRequest * const q);
    DescribeVirtualGatewayRequestPrivate(const DescribeVirtualGatewayRequestPrivate &other,
                                   DescribeVirtualGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
