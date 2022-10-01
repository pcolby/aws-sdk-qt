// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSREQUEST_P_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSREQUEST_P_H

#include "ec2request_p.h"
#include "describelocalgatewayvirtualinterfacegroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfaceGroupsRequest;

class DescribeLocalGatewayVirtualInterfaceGroupsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeLocalGatewayVirtualInterfaceGroupsRequestPrivate(const Ec2Request::Action action,
                                   DescribeLocalGatewayVirtualInterfaceGroupsRequest * const q);
    DescribeLocalGatewayVirtualInterfaceGroupsRequestPrivate(const DescribeLocalGatewayVirtualInterfaceGroupsRequestPrivate &other,
                                   DescribeLocalGatewayVirtualInterfaceGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayVirtualInterfaceGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
