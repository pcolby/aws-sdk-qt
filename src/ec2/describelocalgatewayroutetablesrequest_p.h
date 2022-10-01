// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLESREQUEST_P_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLESREQUEST_P_H

#include "ec2request_p.h"
#include "describelocalgatewayroutetablesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTablesRequest;

class DescribeLocalGatewayRouteTablesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeLocalGatewayRouteTablesRequestPrivate(const Ec2Request::Action action,
                                   DescribeLocalGatewayRouteTablesRequest * const q);
    DescribeLocalGatewayRouteTablesRequestPrivate(const DescribeLocalGatewayRouteTablesRequestPrivate &other,
                                   DescribeLocalGatewayRouteTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayRouteTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
