// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESREQUEST_P_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESREQUEST_P_H

#include "ec2request_p.h"
#include "describelocalgatewayvirtualinterfacesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfacesRequest;

class DescribeLocalGatewayVirtualInterfacesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeLocalGatewayVirtualInterfacesRequestPrivate(const Ec2Request::Action action,
                                   DescribeLocalGatewayVirtualInterfacesRequest * const q);
    DescribeLocalGatewayVirtualInterfacesRequestPrivate(const DescribeLocalGatewayVirtualInterfacesRequestPrivate &other,
                                   DescribeLocalGatewayVirtualInterfacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayVirtualInterfacesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
